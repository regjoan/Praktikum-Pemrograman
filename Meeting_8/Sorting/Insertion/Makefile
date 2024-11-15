insertion: insertion.o
	g++ insertion.o -o insertion.exe

insertion.o: insertion.cpp
	g++ -c insertion.cpp -o insertion.o

run: insertion
	./insertion.exe

insertion_test: insertion_test.o
	g++ insertion_test.o -o insertion_test.exe

insertion_test.o: insertion_test.cpp
	g++ -c insertion_test.cpp -o insertion_test.o

test: insertion_test
	./insertion_test.exe

clean:
	rm -f insertion.o insertion_test.o insertion.exe insertion_test.exe
