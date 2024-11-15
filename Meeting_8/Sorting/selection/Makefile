selection: selection.o
	g++ selection.o -o selection.exe

selection.o: selection.cpp
	g++ -c selection.cpp -o selection.o

run: selection
	./selection.exe

selection_test: selection_test.o
	g++ selection_test.o -o selection_test.exe

selection_test.o: selection_test.cpp
	g++ -c selection_test.cpp -o selection_test.o

test: selection_test
	./selection_test.exe

clean:
	rm -f selection.o selection_test.o selection.exe selection_test.exe
