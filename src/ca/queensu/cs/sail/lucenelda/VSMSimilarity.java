/*
####################################################################################
Stephen W. Thomas
sthomas@cs.queensu.ca
Queen's University

VSMSimilarity.java

This class specifies how the Vector Space Model (VSM) would compute the similarity between
a query and a document. Lucene's default similarity is basic tf-idf (with a few minor, negligible tweaks).

See: http://lucene.apache.org/java/3_5_0/api/core/org/apache/lucene/search/Similarity.html

By overriding some of these functions and providing custom behavior,  
we can have our own arbitrary weighting and scoring function.
 
The ideas behind tf-idf, sublinear tf-idf, and boolean weightings are given in:
[1] "An Introduction to Information Retrieval", Manning et al., 2009


####################################################################################
*/

package ca.queensu.cs.sail.lucenelda;

import org.apache.lucene.index.FieldInvertState;
import org.apache.lucene.search.DefaultSimilarity;

public class VSMSimilarity extends DefaultSimilarity {
	
	// Weighting codes
	public boolean doBasic     = true;  // Basic tf-idf
	public boolean doSublinear = false; // Sublinear tf-idf
	public boolean doBoolean   = false; // Boolean
	
	//Scoring codes
	public boolean doCosine    = true;
	public boolean doOverlap   = false;

	private static final long serialVersionUID = 4697609598242172599L;

	// term frequency in document = measure of how often a term appears in the document
	public float tf(int freq) {		
		// Sublinear tf weighting. Equation taken from [1], pg 127, eq 6.13.
		if (doSublinear){
			if (freq > 0){
				return 1 + (float)Math.log(freq);
			} else {
				return 0;
			}
		} else if (doBoolean){
			return 1;
		}
		// else: doBasic
		// The default behaviour of Lucene is sqrt(freq), but we are implementing the basic VSM model
		return freq;
	}

	// inverse document frequency = measure of how often the term appears across the index
	public float idf(int docFreq, int numDocs) {
		if (doBoolean || doOverlap){
			return 1;
		}
		// The default behaviour of Lucene is 1 + log (numDocs/(docFreq+1)), which is what we want (default VSM model)
		return super.idf(docFreq, numDocs);	
	}

	// normalization factor so that queries can be compared 
	public float queryNorm(float sumOfSquaredWeights){
		if (doOverlap){
			return 1;
		} else if (doCosine){
			return super.queryNorm(sumOfSquaredWeights);
		}
		// else: can't get here
		return super.queryNorm(sumOfSquaredWeights);
	}

	// number of terms in the query that were found in the document
	public float coord(int overlap, int maxOverlap) {
		if (doOverlap){
			return 1;
		} else if (doCosine){
			return 1;
		}
		// else: can't get here
		return super.coord(overlap, maxOverlap);
	}
	
	// Note: this happens an index time, which we don't take advantage of (too many indices!)
	public float computeNorm(String fieldName, FieldInvertState state){
		if (doOverlap){
			return 1;
		} else if (doCosine){
			return super.computeNorm(fieldName, state);
		}
		// else: can't get here
		return super.computeNorm(fieldName, state);
	}
}
