# Target to compile the object file
DetQuad: DetQuad.o
	g++ DetQuad.o -o DetQuad.exe

# Target to compile the C++ program
DetQuad.o: DetQuad.cpp
	g++ -c DetQuad.cpp -o DetQuad.o

# Target to run the program (interactively)
run: DetQuad
	./DetQuad.exe

# Target to compile the object Test file
DetQuad_Test: DetQuad_Test.o
	g++ DetQuad_Test.o -o DetQuad_Test.exe

# Target to compile the C++ Test program
DetQuad_Test.o: DetQuad_Test.cpp
	g++ -c DetQuad_Test.cpp -o DetQuad_Test.o

# Target to run the Test program
test: DetQuad_Test
	./DetQuad_Test.exe

# Target to clean up compiled files
clean:
	rm -f DetQuad.o DetQuad_Test.o DetQuad.exe DetQuad_Test.exe
