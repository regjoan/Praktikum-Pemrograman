# Target to compile the object file
FizzBuzz: FizzBuzz.o
	g++ FizzBuzz.o -o FizzBuzz.exe

# Target to compile the C++ program
FizzBuzz.o: FizzBuzz.cpp
	g++ -c FizzBuzz.cpp -o FizzBuzz.o

# Target to run the program (interactively)
run: FizzBuzz
	./FizzBuzz.exe

# Target to compile the object Test file
FizzBuzz_Test: FizzBuzz_Test.o
	g++ FizzBuzz_Test.o -o FizzBuzz_Test.exe

# Target to compile the C++ Test program
FizzBuzz_Test.o: FizzBuzz_Test.cpp
	g++ -c FizzBuzz_Test.cpp -o FizzBuzz_Test.o

# Target to run the Test program
test: FizzBuzz_Test
	./FizzBuzz_Test.exe

# Target to clean up compiled files
clean:
	rm -f FizzBuzz.o FizzBuzz_Test.o FizzBuzz.exe FizzBuzz_Test.exe
