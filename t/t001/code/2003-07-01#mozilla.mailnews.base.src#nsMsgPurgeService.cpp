ifdef
mozlogging
define
forceprlog
endif
nsmsgpurgeservice
nscrt
nsimsgaccountmanager
nsmsgbasecid
nsmsgutils
nsmsgsearchcore
msgcore
nsispamsettings
nsimsgsearchterm
nsimsghdr
nsirdfservice
nsifilespec
nsimsgprotocolinfo
nsimsgfilterplugin
nsiprefbranch
nsiprefservice
prlog
prlogmoduleinfo
msgpurgelogmodule
nsnull
nsimplisupports
nsmsgpurgeservice
nsimsgpurgeservice
nsimsgsearchnotify
onpurgetimer
nsitimer
timer
apurgeservice
nsmsgpurgeservice
purgeservice
nsmsgpurgeservice
apurgeservice
purgeservice
performpurge
nsmsgpurgeservice
nsmsgpurgeservice
mhaveshutdown
prfalse
mmindelaybetweenpurges
mpurgetimerinterval
nsmsgpurgeservice
nsmsgpurgeservice
mpurgetimer
mpurgetimer
cancel
mhaveshutdown
shutdown
nsimethodimp
nsmsgpurgeservice
init
nsresult
rv
msgpurgelogmodule
msgpurgelogmodule
prnewlogmodule
msgpurge
nscomptr
nsiprefbranch
prefbranch
dogetservice
nsprefservicecontractid
rv
nssucceeded
rv
print
mindelay
rv
prefbranch
getintpref
mail
purge
mindelay
mindelay
nssucceeded
rv
mindelay
mmindelaybetweenpurges
mindelay
print
purgetimerinterval
rv
prefbranch
getintpref
mail
purge
timerinterval
purgetimerinterval
nssucceeded
rv
purgetimerinterval
mpurgetimerinterval
purgetimerinterval
prlog
msgpurgelogmodule
prlogalways
mail
purge
mindelay
minutes
mmindelaybetweenpurges
prlog
msgpurgelogmodule
prlogalways
mail
purge
timerinterval
minutes
mpurgetimerinterval
setupnextpurge
mhaveshutdown
prfalse
nsok
nsimethodimp
nsmsgpurgeservice
shutdown
mpurgetimer
mpurgetimer
cancel
mpurgetimer
nsnull
mhaveshutdown
prtrue
nsok
nsresult
nsmsgpurgeservice
setupnextpurge
prlog
msgpurgelogmodule
prlogalways
setting
to
check
again
in
minutes
mpurgetimerinterval
pruint
timeinmsuint
mpurgetimerinterval
mpurgetimer
mpurgetimer
cancel
mpurgetimer
docreateinstance
timer
mpurgetimer
initwithfunccallback
onpurgetimer
timeinmsuint
nsitimer
typeoneshot
nsok
nsresult
nsmsgpurgeservice
performpurge
prlog
msgpurgelogmodule
prlogalways
performing
purge
nstime
currenttime
nsresult
rv
nscomptr
nsimsgaccountmanager
accountmanager
dogetservice
nsmsgaccountmanagercontractid
rv
nsensuresuccess
rv
rv
nscomptr
nsisupportsarray
allservers
rv
accountmanager
getallservers
getteraddrefs
allservers
nssucceeded
rv
allservers
pruint
numservers
rv
allservers
count
numservers
prlog
msgpurgelogmodule
prlogalways
servers
numservers
pruint
serverindex
serverindex
numservers
serverindex
nscomptr
nsimsgincomingserver
server
doqueryelementat
allservers
serverindex
rv
nssucceeded
rv
server
nsxpidlcstring
type
nsresult
rv
server
gettype
gettercopies
type
nsensuresuccess
rv
rv
nscautostring
contractid
nsmsgprotocolinfocontractidprefix
contractid
append
type
nscomptr
nsimsgprotocolinfo
protocolinfo
dogetservice
contractid
get
rv
nsensuresuccess
rv
prfalse
prbool
cangetincomingmessages
prfalse
protocolinfo
getcangetincomingmessages
cangetincomingmessages
nsxpidlcstring
realhostname
server
getrealhostname
gettercopies
realhostname
prlog
msgpurgelogmodule
prlogalways
serverindex
realhostname
get
type
get
prlog
msgpurgelogmodule
prlogalways
cangetincomingmessages
don
purge
serverindex
cangetincomingmessages
cangetincomingmessages
nscomptr
nsispamsettings
spamsettings
rv
server
getspamsettings
getteraddrefs
spamsettings
nsensuresuccess
rv
rv
print
spamlevel
spamsettings
getlevel
spamlevel
prlog
msgpurgelogmodule
prlogalways
spamlevel
don
purge
serverindex
spamlevel
spamlevel
prbool
purgespam
spamsettings
getpurge
purgespam
prlog
msgpurgelogmodule
prlogalways
purgespam
don
purge
serverindex
purgespam
purgespam
nsxpidlcstring
junkfolderuri
rv
spamsettings
getspamfolderuri
gettercopies
junkfolderuri
nsensuresuccess
rv
rv
prlog
msgpurgelogmodule
prlogalways
junkfolderuri
empty
don
purge
serverindex
junkfolderuri
get
junkfolderuri
isempty
nscomptr
nsimsgfolder
junkfolder
getexistingfolder
junkfolderuri
get
getteraddrefs
junkfolder
prlog
msgpurgelogmodule
prlogalways
exists
doesn
exist
don
purge
serverindex
junkfolderuri
get
junkfolder
junkfolder
nstime
lastpurgetime
nsxpidlcstring
lastpurgetimestring
rv
junkfolder
getstringproperty
lastpurgetime
gettercopies
lastpurgetimestring
nsfailed
rv
lastpurgetimestring
isempty
print
thetime
prparsetimestring
lastpurgetimestring
get
prfalse
thetime
lastpurgetime
thetime
prlog
msgpurgelogmodule
prlogalways
lastpurgetime
blank
then
never
serverindex
junkfolderuri
get
lastpurgetimestring
get
nstime
nextpurgetime
lastpurgetime
nsint
mmindelaybetweenpurges
nstime
currenttime
nextpurgetime
currenttime
prlog
msgpurgelogmodule
prlogalways
last
purge
greater
than
min
delay
serverindex
nscomptr
nsimsgincomingserver
junkfolderserver
rv
junkfolder
getserver
getteraddrefs
junkfolderserver
nsensuresuccess
rv
rv
prbool
serverbusy
prfalse
prbool
serverrequirespassword
prtrue
prbool
userauthenticated
prbool
cansearchmessages
prfalse
junkfolderserver
getisauthenticated
userauthenticated
junkfolderserver
getserverbusy
serverbusy
junkfolderserver
getserverrequirespasswordforbiff
serverrequirespassword
junkfolderserver
getcansearchmessages
cansearchmessages
prlog
msgpurgelogmodule
prlogalways
search
in
progress
serverindex
msearchsession
prlog
msgpurgelogmodule
prlogalways
server
busy
serverindex
serverbusy
prlog
msgpurgelogmodule
prlogalways
serverrequirespassword
serverindex
serverrequirespassword
prlog
msgpurgelogmodule
prlogalways
userauthenticated
serverindex
userauthenticated
cansearchmessages
msearchsession
serverbusy
serverrequirespassword
userauthenticated
print
purgeinterval
spamsettings
getpurgeinterval
purgeinterval
prlog
msgpurgelogmodule
prlogalways
purging
searching
messages
older
than
days
serverindex
purgeinterval
rv
searchfoldertopurge
junkfolder
purgeinterval
nsassertion
cansearchmessages
unexpected
you
should
be
able
to
search
prlog
msgpurgelogmodule
prlogalways
good
time
server
again
later
serverindex
prlog
msgpurgelogmodule
prlogalways
last
purge
too
recent
serverindex
setupnextpurge
nsok
nsresult
nsmsgpurgeservice
searchfoldertopurge
nsimsgfolder
folder
print
purgeinterval
nsresult
rv
msearchsession
docreateinstance
nsmsgsearchsessioncontractid
rv
nsensuresuccess
rv
rv
msearchsession
registerlistener
nscomptr
nsimsgincomingserver
server
rv
folder
getserver
getteraddrefs
server
nsensuresuccess
rv
rv
nsmsgsearchscopevalue
searchscope
server
getsearchscope
searchscope
msearchsession
addscopeterm
searchscope
folder
nscomptr
nsimsgsearchterm
searchterm
msearchsession
createterm
getteraddrefs
searchterm
searchterm
searchterm
setattrib
nsmsgsearchattrib
ageindays
searchterm
setop
nsmsgsearchop
isgreaterthan
nscomptr
nsimsgsearchvalue
searchvalue
searchterm
getvalue
getteraddrefs
searchvalue
searchvalue
searchvalue
setattrib
nsmsgsearchattrib
ageindays
searchvalue
setage
pruint
purgeinterval
searchterm
setvalue
searchvalue
searchterm
setbooleanand
prfalse
msearchsession
appendterm
searchterm
mhdrstodelete
mhdrstodelete
docreateinstance
nssupportsarraycontractid
rv
nsensuresuccess
rv
rv
pruint
count
mhdrstodelete
count
count
nsassertion
count
mhdrstodelete
is
empty
count
mhdrstodelete
clear
msearchfolder
folder
msearchsession
search
nsnull
nsimethodimp
nsmsgpurgeservice
onnewsearch
prlog
msgpurgelogmodule
prlogalways
on
search
nsok
nsimethodimp
nsmsgpurgeservice
onsearchhit
nsimsgdbhdr
amsghdr
nsimsgfolder
afolder
nsensureargpointer
amsghdr
nsxpidlcstring
messageid
nsxpidlcstring
author
nsxpidlcstring
subject
amsghdr
getmessageid
gettercopies
messageid
prlog
msgpurgelogmodule
prlogalways
messageid
messageid
get
amsghdr
getsubject
gettercopies
subject
prlog
msgpurgelogmodule
prlogalways
subject
subject
get
amsghdr
getauthor
gettercopies
author
prlog
msgpurgelogmodule
prlogalways
author
author
get
nsxpidlcstring
junkscorestr
nsresult
rv
amsghdr
getstringproperty
junkscore
gettercopies
junkscorestr
nsensuresuccess
rv
rv
prlog
msgpurgelogmodule
prlogalways
junkscore
empty
don
add
to
list
junkscorestr
get
junkscorestr
isempty
nsok
atoi
junkscorestr
get
prlog
msgpurgelogmodule
prlogalways
added
message
to
mhdrstodelete
appendelement
amsghdr
nsok
nsimethodimp
nsmsgpurgeservice
onsearchdone
nsresult
status
nsresult
rv
nsok
nssucceeded
status
pruint
count
mhdrstodelete
count
count
prlog
msgpurgelogmodule
prlogalways
messages
to
count
count
prlog
msgpurgelogmodule
prlogalways
messages
rv
msearchfolder
deletemessages
mhdrstodelete
nsnull
prfalse
prfalse
nsnull
prfalse
nssucceeded
rv
datebuf
datebuf
prexplodedtime
exploded
prexplodetime
prnow
prlocaltimeparameters
exploded
prformattimeusenglish
datebuf
datebuf
exploded
msearchfolder
setstringproperty
lastpurgetime
datebuf
prlog
msgpurgelogmodule
prlogalways
lastpurgetime
is
now
datebuf
mhdrstodelete
clear
msearchsession
unregisterlistener
msearchsession
nsnull
msearchfolder
nsnull
nsok