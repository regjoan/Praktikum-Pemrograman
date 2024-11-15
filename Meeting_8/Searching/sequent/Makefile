sequent: sequent.o
	g++ sequent.o -o sequent.exe

sequent.o: sequent.cpp
	g++ -c sequent.cpp -o sequent.o

run: sequent
	./sequent.exe

sequent_test: sequent_test.o
	g++ sequent_test.o -o sequent_test.exe

sequent_test.o: sequent_test.cpp
	g++ -c sequent_test.cpp -o sequent_test.o

test: sequent_test
	./sequent_test.exe

clean:
	rm -f sequent.o sequent_test.o sequent.exe sequent_test.exe
