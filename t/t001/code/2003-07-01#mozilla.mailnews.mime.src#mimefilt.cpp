mimemsg
prglobal
key
cert
secrng
secmod
pkfunc
nsmimestringresources
ifndef
xpunix
error
this
is
unix
only
file
the
mimefilt
standalone
program
this
does
go
into
libmime
endif
testfiletype
filename
streamclosure
suf
plstrrchr
filename
suf
suf
nscrt
strcasecmp
suf
txt
nscrt
strcasecmp
suf
text
nscrt
strdup
text
plain
nscrt
strcasecmp
suf
htm
nscrt
strcasecmp
suf
html
nscrt
strdup
text
html
nscrt
strcasecmp
suf
gif
nscrt
strdup
image
gif
nscrt
strcasecmp
suf
jpg
nscrt
strcasecmp
suf
jpeg
nscrt
strdup
image
jpeg
nscrt
strcasecmp
suf
pjpg
nscrt
strcasecmp
suf
pjpeg
nscrt
strdup
image
pjpeg
nscrt
strcasecmp
suf
xbm
nscrt
strdup
image
xbitmap
nscrt
strcasecmp
suf
xpm
nscrt
strdup
image
xpixmap
nscrt
strcasecmp
suf
xwd
nscrt
strdup
image
xwindowdump
nscrt
strcasecmp
suf
bmp
nscrt
strdup
image
ms
bmp
nscrt
strcasecmp
suf
au
nscrt
strdup
audio
basic
nscrt
strcasecmp
suf
aif
nscrt
strcasecmp
suf
aiff
nscrt
strcasecmp
suf
aifc
nscrt
strdup
audio
aiff
nscrt
strcasecmp
suf
ps
nscrt
strdup
application
postscript
testtypeicon
type
streamclosure
nscrt
strncasecmp
type
text
nscrt
strdup
resource
res
html
gopher
text
gif
nscrt
strncasecmp
type
image
nscrt
strdup
resource
res
html
gopher
image
gif
nscrt
strncasecmp
type
audio
nscrt
strdup
resource
res
html
gopher
sound
gif
nscrt
strncasecmp
type
video
nscrt
strdup
resource
res
html
gopher
movie
gif
nscrt
strncasecmp
type
application
nscrt
strdup
resource
res
html
gopher
binary
gif
nscrt
strdup
resource
res
html
gopher
unknown
gif
testoutputfn
buf
print
size
closure
file
out
file
closure
out
fwrite
buf
buf
size
out
testoutputinitfn
type
charset
name
xmactype
xmaccreator
streamclosure
file
out
file
streamclosure
fprintf
out
content
type
type
charset
fprintf
out
charset
charset
name
fprintf
out
name
name
xmactype
xmaccreator
fprintf
out
mac
type
mac
creator
xmactype
xmactype
xmaccreator
xmactype
fprintf
out
crlf
crlf
testimagebegin
imageurl
contenttype
streamclosure
nscrt
strdup
imageurl
testimageend
imageclosure
status
url
imageclosure
url
prfree
url
testimagemakeimagehtml
imagedata
url
imagedata
prefix
center
img
src
suffix
center
prefix
center
table
border
cellpadding
bgcolor
white
tr
td
align
center
an
inlined
image
would
have
gone
here
br
suffix
td
tr
table
center
endif
buf
buf
prmalloc
nscrt
strlen
prefix
nscrt
strlen
suffix
nscrt
strlen
url
buf
buf
plstrcat
buf
prefix
plstrcat
buf
url
plstrcat
buf
suffix
buf
testimagewritebuffer
buf
print
size
imageclosure
testpasswdprompt
pkslotinfo
slot
wincx
buf
fprintf
stdout
password
required
fgets
buf
buf
stdin
nscrt
strlen
nscrt
strlen
nscrt
strlen
test
file
in
file
out
url
prbool
fancyheadersp
prbool
htmlp
prbool
outlinep
prbool
dexlatep
prbool
variablewidthplaintextp
status
mimeobject
obj
mimedisplayoptions
opt
mimedisplayoptions
dexlatep
htmlp
prfalse
opt
fancyheadersp
fancyheadersp
opt
headers
mimeheaderssome
opt
rotp
prfalse
status
mimeparseurloptions
url
opt
status
prfree
opt
mimeoutofmemory
opt
url
url
opt
writehtmlp
htmlp
opt
dexlatep
dexlatep
opt
outputinitfn
testoutputinitfn
opt
outputfn
testoutputfn
opt
charsetconversionfn
opt
rfcconversionp
prfalse
opt
filetypefn
testfiletype
opt
streamclosure
out
opt
imagebegin
testimagebegin
opt
imageend
testimageend
opt
makeimagehtml
testimagemakeimagehtml
opt
imagewritebuffer
testimagewritebuffer
opt
variablewidthplaintextp
variablewidthplaintextp
obj
mimenew
mimeobjectclass
mimemessageclass
mimeheaders
messagerfc
obj
prfree
opt
mimeoutofmemory
obj
options
opt
status
obj
initialize
obj
status
status
obj
parsebegin
obj
status
prfree
opt
prfree
obj
mimeoutofmemory
buf
size
fread
buf
buf
buf
stdin
size
status
obj
parsebuffer
buf
size
obj
status
mimefree
obj
prfree
opt
status
status
obj
parseeof
obj
prfalse
status
status
obj
parseend
obj
prfalse
status
mimefree
obj
prfree
opt
status
outlinep
fprintf
out
obj
debugprint
obj
stderr
fprintf
out
mimefree
obj
prfree
opt
testcdbnamecb
arg
vers
vers
sprintf
netscape
cert
db
getenv
home
sprintf
netscape
cert
db
getenv
home
vers
testkdbnamecb
arg
vers
vers
sprintf
netscape
key
db
getenv
home
sprintf
netscape
key
db
getenv
home
vers
secinit
argc
argv
print
url
prbool
fancyp
prtrue
prbool
htmlp
prtrue
prbool
outlinep
prfalse
prbool
dexlatep
prfalse
filename
certcertdbhandle
cdbhandle
seckeykeydbhandle
kdbhandle
prinit
mimefilt
cdbhandle
certcertdbhandle
calloc
cdbhandle
secsuccess
certopencertdb
cdbhandle
prfalse
testcdbnamecb
certopenvolatilecertdb
cdbhandle
certsetdefaultcertdb
cdbhandle
rngrnginit
kdbhandle
seckeyopenkeydb
prfalse
testkdbnamecb
seckeysetdefaultkeydb
kdbhandle
pksetpasswordfunc
testpasswdprompt
sprintf
filename
netscape
secmodule
db
getenv
home
secmodinit
filename
secinit
argc
argv
url
nscrt
strdup
url
argv
url
plstrstr
url
part
plstrstr
url
part
htmlp
prfalse
argc
nscrt
strcmp
argv
fancy
fancyp
prtrue
nscrt
strcmp
argv
no
fancy
fancyp
prfalse
nscrt
strcmp
argv
html
htmlp
prtrue
nscrt
strcmp
argv
raw
htmlp
prfalse
nscrt
strcmp
argv
outline
outlinep
prtrue
nscrt
strcmp
argv
dexlate
dexlatep
prtrue
fprintf
stderr
usage
url
fancy
no
fancy
html
raw
outline
dexlate
message
rfc
output
plstrrchr
argv
plstrrchr
argv
argv
fail
test
stdin
stdout
url
fancyp
htmlp
outlinep
dexlatep
prtrue
fprintf
stdout
fflush
stdout
fail
certclosepermcertdb
cdbhandle
seckeyclosekeydb
kdbhandle
exit