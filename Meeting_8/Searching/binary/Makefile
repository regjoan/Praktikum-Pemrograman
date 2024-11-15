binary: binary.o
	g++ binary.o -o binary.exe

binary.o: binary.cpp
	g++ -c binary.cpp -o binary.o

run: binary
	./binary.exe

binary_test: binary_test.o
	g++ binary_test.o -o binary_test.exe

binary_test.o: binary_test.cpp
	g++ -c binary_test.cpp -o binary_test.o

test: binary_test
	./binary_test.exe

clean:
	rm -f binary.o binary_test.o binary.exe binary_test.exe
