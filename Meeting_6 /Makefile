StudentData: StudentData.o
	g++ StudentData.o -o StudentData.exe

StudentData.o: StudentData.cpp
	g++ -c StudentData.cpp -o StudentData.o

run: StudentData
	./StudentData.exe

StudentData_Test: StudentData_Test.o
	g++ StudentData_Test.o -o StudentData_Test.exe

StudentData_Test.o: StudentData_Test.cpp
	g++ -c StudentData_Test.cpp -o StudentData_Test.o

test: StudentData_Test
	./StudentData_Test.exe

clean:
	rm -f StudentData.o StudentData_Test.o StudentData.exe StudentData_Test.exe
