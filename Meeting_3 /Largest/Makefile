# Target to compile the object file
LargestNum: LargestNum.o
	g++ LargestNum.o -o LargestNum.exe

# Target to compile the C++ program
LargestNum.o: LargestNum.cpp
	g++ -c LargestNum.cpp -o LargestNum.o

# Target to run the program (interactively)
run: LargestNum
	./LargestNum.exe

# Target to compile the object Test file
LargestNum_Test: LargestNum_Test.o
	g++ LargestNum_Test.o -o LargestNum_Test.exe

# Target to compile the C++ Test program
LargestNum_Test.o: LargestNum_Test.cpp
	g++ -c LargestNum_Test.cpp -o LargestNum_Test.o

# Target to run the Test program
test: LargestNum_Test
	./LargestNum_Test.exe

# Target to clean up compiled files
clean:
	rm -f LargestNum.o LargestNum_Test.o LargestNum.exe LargestNum_Test.exe
