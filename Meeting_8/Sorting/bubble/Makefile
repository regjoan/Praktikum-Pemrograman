bubble: bubble.o
	g++ bubble.o -o bubble.exe

bubble.o: bubble.cpp
	g++ -c bubble.cpp -o bubble.o

run: bubble
	./bubble.exe

bubble_test: bubble_test.o
	g++ bubble_test.o -o bubble_test.exe

bubble_test.o: bubble_test.cpp
	g++ -c bubble_test.cpp -o bubble_test.o

test: bubble_test
	./bubble_test.exe

clean:
	rm -f bubble.o bubble_test.o bubble.exe bubble_test.exe
