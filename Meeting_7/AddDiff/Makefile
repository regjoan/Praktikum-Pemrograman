# Target to compile the object file
AddDiff: AddDiff.o
	g++ AddDiff.o -o AddDiff.exe

# Target to compile the C++ program
AddDiff.o: AddDiff.cpp
	g++ -c AddDiff.cpp -o AddDiff.o

# Target to run the program (interactively)
run: AddDiff
	./AddDiff.exe

# Target to compile the object Test file
AddDiff_Test: AddDiff_Test.o
	g++ AddDiff_Test.o -o AddDiff_Test.exe

# Target to compile the C++ Test program
AddDiff_Test.o: AddDiff_Test.cpp
	g++ -c AddDiff_Test.cpp -o AddDiff_Test.o

# Target to run the Test program
test: AddDiff_Test
	./AddDiff_Test.exe

# Target to clean up compiled files
clean:
	rm -f AddDiff.o AddDiff_Test.o AddDiff.exe AddDiff_Test.exe
