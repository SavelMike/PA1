#! /bin/bash

../triangles2 < ENG/0000_in.txt > myOutput0000 
../triangles2 < ENG/0001_in.txt > myOutput0001 
../triangles2 < ENG/0002_in.txt > myOutput0002 
../triangles2 < ENG/0003_in.txt > myOutput0003 
../triangles2 < ENG/0004_in.txt > myOutput0004 
../triangles2 < ENG/0005_in.txt > myOutput0005 
../triangles2 < ENG/0006_in.txt > myOutput0006 
../triangles2 < ENG/0007_in.txt > myOutput0007 
../triangles2 < ENG/0008_in.txt > myOutput0008 
../triangles2 < ENG/0009_in.txt > myOutput0009 
../triangles2 < ENG/0010_in.txt > myOutput0010 
../triangles2 < ENG/in_3381260.bin > myOutput0011 
../triangles2 < ENG/in_3381275.bin > myOutput0012 

diff -u myOutput0000 ENG/0000_out.txt
diff -u myOutput0001 ENG/0001_out.txt
diff -u myOutput0002 ENG/0002_out.txt
diff -u myOutput0003 ENG/0003_out.txt
diff -u myOutput0004 ENG/0004_out.txt
diff -u myOutput0005 ENG/0005_out.txt
diff -u myOutput0006 ENG/0006_out.txt
diff -u myOutput0007 ENG/0007_out.txt
diff -u myOutput0008 ENG/0008_out.txt
diff -u myOutput0009 ENG/0009_out.txt
diff -u myOutput0010 ENG/0010_out.txt
diff -u myOutput0011 ENG/ref_3381260.bin
diff -u myOutput0012 ENG/ref_3381275.bin

rm myOutput*
