# Target to compile the object file
Factorial: Factorial.o
	g++ Factorial.o -o Factorial.exe

# Target to compile the C++ program
Factorial.o: Factorial.cpp
	g++ -c Factorial.cpp -o Factorial.o

# Target to run the program (interactively)
run: Factorial
	./Factorial.exe

# Target to compile the object Test file
Factorial_Test: Factorial_Test.o
	g++ Factorial_Test.o -o Factorial_Test.exe

# Target to compile the C++ Test program
Factorial_Test.o: Factorial_Test.cpp
	g++ -c Factorial_Test.cpp -o Factorial_Test.o

# Target to run the Test program
test: Factorial_Test
	./Factorial_Test.exe

# Target to clean up compiled files
clean:
	rm -f Factorial.o Factorial_Test.o Factorial.exe Factorial_Test.exe
