# Target to compile the object file
QuadEq: QuadEq.o
	g++ QuadEq.o -o QuadEq.exe

# Target to compile the C++ program
QuadEq.o: QuadEq.cpp
	g++ -c QuadEq.cpp -o QuadEq.o

# Target to run the program (interactively)
run: QuadEq
	./QuadEq.exe

# Target to compile the object Test file
QuadEq_Test: QuadEq_Test.o
	g++ QuadEq_Test.o -o QuadEq_Test.exe

# Target to compile the C++ Test program
QuadEq_Test.o: QuadEq_Test.cpp
	g++ -c QuadEq_Test.cpp -o QuadEq_Test.o

# Target to run the Test program
test: QuadEq_Test
	./QuadEq_Test.exe

# Target to clean up compiled files
clean:
	rm -f QuadEq.o QuadEq_Test.o QuadEq.exe QuadEq_Test.exe
