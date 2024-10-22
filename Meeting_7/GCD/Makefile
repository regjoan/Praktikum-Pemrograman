# Target to compile the object file
GCD: GCD.o
	g++ GCD.o -o GCD.exe

# Target to compile the C++ program
GCD.o: GCD.cpp
	g++ -c GCD.cpp -o GCD.o

# Target to run the program (interactively)
run: GCD
	./GCD.exe

# Target to compile the object Test file
GCD_Test: GCD_Test.o
	g++ GCD_Test.o -o GCD_Test.exe

# Target to compile the C++ Test program
GCD_Test.o: GCD_Test.cpp
	g++ -c GCD_Test.cpp -o GCD_Test.o

# Target to run the Test program
test: GCD_Test
	./GCD_Test.exe

# Target to clean up compiled files
clean:
	rm -f GCD.o GCD_Test.o GCD.exe GCD_Test.exe

