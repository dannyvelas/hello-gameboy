# compile main.c into object file
main.o: main.c
	/Users/dannyvelasquez/.bin/gbdk/bin/lcc -c -o main.o main.c

# Compile a .gb file from an object file files
main.gb: main.o
	/Users/dannyvelasquez/.bin/gbdk/bin/lcc -o main.gb main.o
