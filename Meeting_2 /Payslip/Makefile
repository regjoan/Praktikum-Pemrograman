# Target to compile the object file
Payslip: Payslip.o
	g++ Payslip.o -o Payslip.exe

# Target to compile the C++ program
Payslip.o: Payslip.cpp
	g++ -c Payslip.cpp -o Payslip.o

# Target to run the program (interactively)
run: Payslip
	./Payslip.exe

# Target to compile the object Test file
Payslip_Test: Payslip_Test.o
	g++ Payslip_Test.o -o Payslip_Test.exe

# Target to compile the C++ Test program
Payslip_Test.o: Payslip_Test.cpp
	g++ -c Payslip_Test.cpp -o Payslip_Test.o

# Target to run the Test program
test: Payslip_Test
	./Payslip_Test.exe

# Target to clean up compiled files
clean:
	rm -f Payslip.o Payslip_Test.o Payslip.exe Payslip_Test.exe
