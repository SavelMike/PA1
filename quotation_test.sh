#! /bin/bash

./quotation < ../doc/ENG/0000_in.txt > myOutput0000 
./quotation < ../doc/ENG/0001_in.txt > myOutput0001 
./quotation < ../doc/ENG/0002_in.txt > myOutput0002 
./quotation < ../doc/ENG/0003_in.txt > myOutput0003 
./quotation < ../doc/ENG/0004_in.txt > myOutput0004 
./quotation < ../doc/ENG/0005_in.txt > myOutput0005 
./quotation < ../doc/ENG/0006_in.txt > myOutput0006 
./quotation < ../doc/ENG/0007_in.txt > myOutput0007

diff myOutput0000 ../doc/ENG/0000_out.txt
diff myOutput0001 ../doc/ENG/0001_out.txt
diff myOutput0002 ../doc/ENG/0002_out.txt
diff myOutput0003 ../doc/ENG/0003_out.txt
diff myOutput0004 ../doc/ENG/0004_out.txt
diff myOutput0005 ../doc/ENG/0005_out.txt
diff myOutput0006 ../doc/ENG/0006_out.txt
diff myOutput0007 ../doc/ENG/0007_out.txt

