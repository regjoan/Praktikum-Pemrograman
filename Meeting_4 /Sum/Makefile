# Target to compile the object file
SumNumber: SumNumber.o
	g++ SumNumber.o -o SumNumber.exe

# Target to compile the C++ program
SumNumber.o: SumNumber.cpp
	g++ -c SumNumber.cpp -o SumNumber.o

# Target to run the program (interactively)
run: SumNumber
	./SumNumber.exe

# Target to compile the object Test file
SumNumber_Test: SumNumber_Test.o
	g++ SumNumber_Test.o -o SumNumber_Test.exe

# Target to compile the C++ Test program
SumNumber_Test.o: SumNumber_Test.cpp
	g++ -c SumNumber_Test.cpp -o SumNumber_Test.o

# Target to run the Test program
test: SumNumber_Test
	./SumNumber_Test.exe

# Target to clean up compiled files
clean:
	rm -f SumNumber.o SumNumber_Test.o SumNumber.exe SumNumber_Test.exe
