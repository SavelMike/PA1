#! /bin/bash

../triangles1  < ENG/0000_in.txt > myOutput0000 
../triangles1  < ENG/0001_in.txt > myOutput0001 
../triangles1  < ENG/0002_in.txt > myOutput0002 
../triangles1  < ENG/0003_in.txt > myOutput0003 
../triangles1  < ENG/0004_in.txt > myOutput0004 
../triangles1  < ENG/0005_in.txt > myOutput0005 
../triangles1  < ENG/0006_in.txt > myOutput0006 

diff -u myOutput0000 ENG/0000_out.txt
diff -u myOutput0001 ENG/0001_out.txt
diff -u myOutput0002 ENG/0002_out.txt
diff -u myOutput0003 ENG/0003_out.txt
diff -u myOutput0004 ENG/0004_out.txt
diff -u myOutput0005 ENG/0005_out.txt
diff -u myOutput0006 ENG/0006_out.txt

rm myOutput*
