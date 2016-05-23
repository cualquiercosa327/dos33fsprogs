  5    REM *** KSP by Vince Weaver ***
  6    REM *** A VMW Software Production ***
  10   HOME
  20   HGR
  100  REM *** SQUAD SCREEN ***
  110  PRINT CHR$(4);"BLOAD SQUAD.HGR,A$2000"
  400  REM *** LOADING SCREEN ***
  410  REM BLOAD LOADING.HGR,A$2000
  420  REM *** TITLE SCREEN ***
  430  REM BLOAD TITLE.HGR,A$2000
  580  S=0
  590  VTAB 21: PRINT "    ";
  600  FOR I=1 TO 32: PRINT ".";: NEXT I
  700 FOR J=1 TO 32
  710 HTAB J+4:VTAB 21
  720 INVERSE: PRINT " ";: NORMAL
  790 S=S+1: IF S=4 THEN S=0
  795 IF S<>1 GOTO 840
  800  I=INT(RND(1)*8)+1
  802 VTAB 22: HTAB 1
  803 PRINT "                           ";
  805 ON I GOSUB 850,851,852,853,854,855,856,857
  840 FOR T=1 TO 200: NEXT T
  842 NEXT J
  845 END
  850 HTAB 10:PRINT "Adding Extraneous Ks":RETURN
  851 HTAB 14:PRINT "Locating Jeb":RETURN
  852 HTAB 11:PRINT "Breaking Quicksaves":RETURN
  853 HTAB 12:PRINT "Patching Conics":RETURN
  854 HTAB 12:PRINT "Spinning up Duna":RETURN
  855 HTAB 11:PRINT "Warming up the 6502":RETURN
  856 HTAB 10:PRINT "Preparing Explosions":RETURN
  857 HTAB 10:PRINT "Unleashing the Kraken":RETURN
  900  REM ****************
  901  REM  KSP THEME MUSIC
  902  REM  SEE http://eightbitsoundandfury.ld8.org/programming.html
  903  REM ****************
  910  FOR L = 770 TO 790: READ V: POKE L,V: NEXT L
  920  DATA  173,48,192,136,208,5,206,1,3,240,9
  930  DATA  202,208,245,174,0,3,76,2,3,96
  935  REM L2ECGL4CEGL2B-AGL4CEGL2B-AGCD
  940  FOR I=1 TO 17: READ F: READ D: POKE 768,F: POKE 769,D: CALL 770: NEXT I
  950  DATA 202,216,255,216,170,216
  955  DATA 255,108,202,108,170,108
  960  DATA 143,216,152,216,170,216
  965 DATA 255,108,202,108,170,108
  970 DATA 143,216,152,216,170,216,255,216,227,255
  999 REM *** DONE LOADING ***
