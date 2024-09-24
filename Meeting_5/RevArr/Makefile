# Target to compile the object file
RevArr: RevArr.o
	g++ RevArr.o -o RevArr.exe

# Target to compile the C++ program
RevArr.o: RevArr.cpp
	g++ -c RevArr.cpp -o RevArr.o

# Target to run the program (interactively)
run: RevArr
	./RevArr.exe

# Target to compile the object Test file
RevArr_Test: RevArr_Test.o
	g++ RevArr_Test.o -o RevArr_Test.exe

# Target to compile the C++ Test program
RevArr_Test.o: RevArr_Test.cpp
	g++ -c RevArr_Test.cpp -o RevArr_Test.o

# Target to run the Test program
test: RevArr_Test
	./RevArr_Test.exe

# Target to clean up compiled files
clean:
	rm -f RevArr.o RevArr_Test.o RevArr.exe RevArr_Test.exe
