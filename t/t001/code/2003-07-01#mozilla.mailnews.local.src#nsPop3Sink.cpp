msgcore
nspopsink
prprf
prlog
nscore
stdio
time
nsifilespec
nsparsemailbox
nsifolder
nsimsglocalmailfolder
nsimsgincomingserver
nslocalutils
nsmsglocalfolderhdrs
nsimsgfolder
nsreadableutils
nsimplthreadsafeisupports
nspopsink
nsipopsink
nspopsink
nspopsink
mauthed
prfalse
maccounturl
nsnull
mbiffstate
msenderauthed
prfalse
moutputbuffer
nsnull
moutputbuffersize
mnewmailparser
nsnull
ifdef
debug
mfilecounter
endif
mpopserver
nsnull
moutfilestream
nsnull
mfolder
nsnull
mbuildmessageuri
prfalse
nspopsink
nspopsink
prfree
maccounturl
prfree
moutputbuffer
nsifrelease
mpopserver
releasefolderlock
nsifrelease
mfolder
nsifrelease
mnewmailparser
nsresult
nspopsink
setuserauthenticated
prbool
authed
mauthed
authed
nsok
nsresult
nspopsink
getuserauthenticated
prbool
authed
nsassertion
authed
getter
in
getuserauthenticated
authed
nserrornullpointer
authed
mauthed
nsok
nsresult
nspopsink
setsenderauthedflag
closure
prbool
authed
mauthed
authed
nsok
nsresult
nspopsink
setmailaccounturl
urlstring
urlstring
prfree
maccounturl
maccounturl
plstrdup
urlstring
nsok
nsresult
nspopsink
getmailaccounturl
urlstring
nsassertion
urlstring
getter
in
getmailaccounturl
urlstring
nserrornullpointer
urlstring
nscrt
strdup
maccounturl
nsok
nsresult
nspopsink
beginmaildelivery
prbool
uidldownload
nsimsgwindow
amsgwindow
prbool
abool
ifdef
debug
mfilecounter
endif
nsresult
rv
nscomptr
nsimsgincomingserver
server
doqueryinterface
mpopserver
server
nserrorunexpected
nsfilespec
filespec
prbool
islocked
nscomptr
nsisupports
supports
doqueryinterface
nsstaticcast
nsipopsink
mfolder
getlocked
islocked
islocked
mfolder
acquiresemaphore
supports
nsmsgfolderbusy
uidldownload
nscomptr
nsifilespec
path
mfolder
getpath
getteraddrefs
path
path
getfilespec
filespec
nscomptr
nsifilespec
maildirectory
rv
server
getlocalpath
getteraddrefs
maildirectory
nsfailed
rv
rv
maildirectory
getfilespec
filespec
filespec
inbox
moutfilestream
nsiofilestream
filespec
moutfilestream
nserroroutofmemory
moutfilestream
seek
filespec
getfilesize
moutfilestream
isopen
nserrorfailure
mnewmailparser
nsparsenewmailstate
nsifaddref
mnewmailparser
mnewmailparser
nsnull
nserroroutofmemory
nscomptr
nsifolder
serverfolder
rv
getserverfolder
getteraddrefs
serverfolder
nsfailed
rv
rv
rv
mnewmailparser
init
serverfolder
mfolder
filespec
moutfilestream
amsgwindow
nsfailed
rv
nsifrelease
mnewmailparser
rv
nsok
mnewmailparser
setdbfolderstream
moutfilestream
uidldownload
mnewmailparser
mnewmailparser
disablefilters
ifdef
debug
printf
begin
mail
message
delivery
endif
abool
abool
prtrue
nsok
nsresult
nspopsink
endmaildelivery
mnewmailparser
moutfilestream
moutfilestream
flush
mnewmailparser
onstoprequest
nsnull
nsnull
nsok
mnewmailparser
setdbfolderstream
nsnull
moutfilestream
moutfilestream
close
moutfilestream
moutfilestream
mnewmailparser
mnewmailparser
updatedbfolderinfo
nsresult
rv
releasefolderlock
nsassertion
nssucceeded
rv
folder
lock
released
successfully
mfolder
callfilterplugins
nsnull
nscomptr
nsimsglocalmailfolder
localfolder
doqueryinterface
mfolder
localfolder
localfolder
refreshsizeondisk
nscomptr
nsimsgincomingserver
server
doqueryinterface
mpopserver
server
nscomptr
nsimsgfilterlist
filterlist
rv
server
getfilterlist
nsnull
getteraddrefs
filterlist
nsensuresuccess
rv
rv
filterlist
filterlist
flushlogifnecessary
mfolder
updatesummarytotals
prtrue
mnewmailparser
nscomptr
nsimsgwindow
msgwindow
mnewmailparser
getmsgwindow
getteraddrefs
msgwindow
msgwindow
nscomptr
nsimsgfolder
openfolder
msgwindow
getopenfolder
getteraddrefs
openfolder
openfolder
openfolder
mfolder
nscomptr
nsimsglocalmailfolder
localfolder
doqueryinterface
openfolder
localfolder
prbool
hasnew
openfolder
gethasnewmessages
hasnew
hasnew
openfolder
callfilterplugins
nsnull
ifdef
debug
printf
end
mail
message
delivery
endif
nsok
nsresult
nspopsink
releasefolderlock
nsresult
result
nsok
mfolder
result
prbool
havesemaphore
nscomptr
nsisupports
supports
doqueryinterface
nsstaticcast
nsipopsink
result
mfolder
testsemaphore
supports
havesemaphore
nssucceeded
result
havesemaphore
result
mfolder
releasesemaphore
supports
result
nsresult
nspopsink
abortmaildelivery
mnewmailparser
mnewmailparser
setdbfolderstream
nsnull
moutfilestream
moutfilestream
isopen
moutfilestream
close
moutfilestream
moutfilestream
mnewmailparser
mnewmailparser
updatedbfolderinfo
nsresult
rv
releasefolderlock
nsassertion
nssucceeded
rv
folder
lock
released
successfully
ifdef
debug
printf
abort
mail
message
delivery
endif
nsok
nsresult
nspopsink
incorporatebegin
uidlstring
nsiuri
aurl
pruint
flags
closure
ifdef
debug
printf
incorporate
message
begin
uidlstring
printf
uidl
uidlstring
endif
closure
closure
mmsgoffset
moutfilestream
tell
dummyenvelope
getdummyenvelope
nsresult
rv
writelinetomailbox
dummyenvelope
nsfailed
rv
rv
uidlstring
nscautostring
uidlcstring
uidl
uidlcstring
uidlstring
uidlcstring
msglinebreak
rv
writelinetomailbox
nsconstcast
uidlcstring
get
nsfailed
rv
rv
statusline
prsmprintf
xmozillastatusformat
msglinebreak
flags
rv
writelinetomailbox
statusline
nsfailed
rv
rv
rv
writelinetomailbox
mozilla
status
msglinebreak
nsfailed
rv
rv
prsmprintffree
statusline
nsok
nsresult
nspopsink
setpopserver
nsipopincomingserver
server
nsifrelease
mpopserver
mpopserver
server
nsaddref
mpopserver
nsok
nsresult
nspopsink
getpopserver
nsipopincomingserver
server
server
nserrornullpointer
server
mpopserver
server
nsaddref
server
nsok
nsresult
nspopsink
getfolder
nsimsgfolder
folder
nsensureargpointer
folder
nsifaddref
folder
mfolder
nsok
nsresult
nspopsink
setfolder
nsimsgfolder
folder
nsifrelease
mfolder
mfolder
folder
nsifaddref
mfolder
nsok
nsresult
nspopsink
getserverfolder
nsifolder
afolder
afolder
nserrornullpointer
mpopserver
nscomptr
nsimsgincomingserver
incomingserver
doqueryinterface
mpopserver
incomingserver
incomingserver
getrootfolder
afolder
afolder
nsnull
nserrornullpointer
nspopsink
getdummyenvelope
result
ct
timet
now
time
timet
defined
xpwin
now
now
xfffffff
now
xfffffff
endif
ct
ctime
now
prassert
ct
nscrt
cr
ct
nscrt
lf
ct
plstrcpy
result
from
plstrcpy
result
ct
plstrcpy
result
msglinebreak
result
nsresult
nspopsink
incorporatewrite
block
print
length
print
blockoffset
strncmp
block
from
length
blockoffset
moutputbuffer
length
moutputbuffersize
moutputbuffer
moutputbuffer
prmalloc
length
moutputbuffer
prrealloc
moutputbuffer
length
moutputbuffersize
length
moutputbuffer
blockoffset
moutputbuffer
memcpy
moutputbuffer
blockoffset
block
length
blockoffset
moutputbuffer
length
nsresult
rv
writelinetomailbox
moutputbuffer
nsfailed
rv
rv
nsok
nsresult
nspopsink
writelinetomailbox
buffer
buffer
print
bufferlen
plstrlen
buffer
mnewmailparser
mnewmailparser
handleline
buffer
bufferlen
moutfilestream
nserroroutofmemory
nsassertion
moutfilestream
eof
we
are
writing
to
end
of
file
print
bytes
moutfilestream
write
buffer
bufferlen
bytes
bufferlen
nserrorfailure
nsok
nsresult
nspopsink
incorporatecomplete
nsimsgwindow
msgwindow
mbuildmessageuri
mbasemessageuri
pruint
msgkey
mnewmailparser
getenvelopepos
msgkey
mmessageuri
setlength
nsbuildlocalmessageuri
mbasemessageuri
msgkey
mmessageuri
nsresult
rv
writelinetomailbox
msglinebreak
nsfailed
rv
rv
rv
moutfilestream
flush
nsfailed
rv
rv
nsassertion
mnewmailparser
could
get
mnewmailparser
mnewmailparser
mnewmailparser
publishmsgheader
msgwindow
ifdef
debug
printf
incorporate
message
complete
endif
nsok
nsresult
nspopsink
incorporateabort
prbool
uidldownload
nsresult
rv
rv
moutfilestream
close
nsensuresuccess
rv
rv
mmsgoffset
nscomptr
nsimsgincomingserver
server
doqueryinterface
mpopserver
nsassertion
server
could
get
the
pop
server
nscomptr
nsifilespec
maildirectory
uidldownload
mfolder
getpath
getteraddrefs
maildirectory
rv
server
getlocalpath
getteraddrefs
maildirectory
nsensuresuccess
rv
rv
rv
maildirectory
appendrelativeunixpath
inbox
nsensuresuccess
rv
rv
rv
maildirectory
truncate
mmsgoffset
nsensuresuccess
rv
rv
ifdef
debug
printf
incorporate
message
abort
endif
rv
nsresult
nspopsink
biffgetnewmail
ifdef
debug
printf
biff
get
mail
endif
nsok
nsresult
nspopsink
setbiffstateandupdatefe
pruint
abiffstate
print
numnewmessages
mbiffstate
abiffstate
mfolder
mfolder
setnumnewmessages
numnewmessages
mfolder
setbiffstate
abiffstate
nsok
nsimethodimp
nspopsink
getbuildmessageuri
prbool
bval
bval
nserrornullpointer
bval
mbuildmessageuri
nsok
nsimethodimp
nspopsink
setbuildmessageuri
prbool
bval
mbuildmessageuri
bval
nsok
nsimethodimp
nspopsink
getmessageuri
messageuri
messageuri
mmessageuri
length
nserrornullpointer
messageuri
tonewcstring
mmessageuri
nsok
nsimethodimp
nspopsink
setmessageuri
messageuri
messageuri
nserrornullpointer
mmessageuri
messageuri
nsok
nsimethodimp
nspopsink
getbasemessageuri
basemessageuri
basemessageuri
mbasemessageuri
nserrornullpointer
basemessageuri
nscrt
strdup
mbasemessageuri
nsok
nsimethodimp
nspopsink
setbasemessageuri
basemessageuri
basemessageuri
nserrornullpointer
mbasemessageuri
adopt
nscrt
strdup
basemessageuri
nsok