# Target to compile the object file
MulTab: MulTab.o
	g++ MulTab.o -o MulTab.exe

# Target to compile the C++ program
MulTab.o: MulTab.cpp
	g++ -c MulTab.cpp -o MulTab.o

# Target to run the program (interactively)
run: MulTab
	./MulTab.exe

# Target to compile the object Test file
MulTab_Test: MulTab_Test.o
	g++ MulTab_Test.o -o MulTab_Test.exe

# Target to compile the C++ Test program
MulTab_Test.o: MulTab_Test.cpp
	g++ -c MulTab_Test.cpp -o MulTab_Test.o

# Target to run the Test program
test: MulTab_Test
	./MulTab_Test.exe

# Target to clean up compiled files
clean:
	rm -f MulTab.o MulTab_Test.o MulTab.exe MulTab_Test.exe
