#! /bin/bash

../quotation < ENG/0000_in.txt > myOutput0000 
../quotation < ENG/0001_in.txt > myOutput0001 
../quotation < ENG/0002_in.txt > myOutput0002 
../quotation < ENG/0003_in.txt > myOutput0003 
../quotation < ENG/0004_in.txt > myOutput0004 
../quotation < ENG/0005_in.txt > myOutput0005 
../quotation < ENG/0006_in.txt > myOutput0006 
../quotation < ENG/0007_in.txt > myOutput0007

diff myOutput0000 ENG/0000_out.txt
diff myOutput0001 ENG/0001_out.txt
diff myOutput0002 ENG/0002_out.txt
diff myOutput0003 ENG/0003_out.txt
diff myOutput0004 ENG/0004_out.txt
diff myOutput0005 ENG/0005_out.txt
diff myOutput0006 ENG/0006_out.txt
diff myOutput0007 ENG/0007_out.txt

rm myOutput*
