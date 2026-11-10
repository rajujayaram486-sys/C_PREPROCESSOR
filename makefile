#Makefile
preprocessor:pre.o header_inclusion.o comment_removal.o macro_replacement.o
	cc pre.o header_inclusion.o comment_removal.o macro_replacement.o -o preprocessor
pre.o:pre.c
	cc -c pre.c
header_inclusion.o:header_inclusion.c
	cc -c header_inclusion.c
comment_removal.o:comment_removal.c
	cc -c comment_removal.c
macro_replacement.o:macro_replacement.c
	cc -c macro_replacement.c
clear:
	@echo "cleaning up"
	@rm -v *.o

