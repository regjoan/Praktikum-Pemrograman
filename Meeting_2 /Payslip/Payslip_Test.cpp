#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    cout << "Payslip for an employee" << endl;
    
    string name = "Nazwa";
    	cout << "Name : " <<name<<endl;
    
    int gross_salary = 10000000;
    	cout << "Gross Salary : Rp"<<gross_salary<<endl;
    
    int tax;
    	tax = gross_salary*0.2;
    	cout << "Tax: Rp" << tax << endl;
    
    int installment = 2000000;
    	cout << "Installment: Rp"<<installment<<endl;
    
    int insurance = 1000000;
   	cout << "insurance: Rp"<<insurance<<endl;
    
    int net_salary = 5000000;
        net_salary = gross_salary - (tax + installment + insurance);
    	cout << "Net Salary: Rp" << net_salary<<endl;
   
    if (net_salary<0){
        cout << "Your money management needs to be monitored and corrected :(";
    }
    else {
        
    }

    string expectedName = "Nazwa";
    int expectedGS = 10000000;
    int expectedTax = 20000000;
    int expectedInstallment = 20000000;
    int expectedInsurance = 10000000;
    int expectedNS = 50000000;

    bool testPassed = false;
    if(expectedName==name) testPassed = true;
    if(expectedGS==gross_salary) testPassed = true;
    if(expectedTax==tax) testPassed = true;
    if(expectedInstallment==installment) testPassed = true;
    if(expectedInsurance==insurance) testPassed = true;
    if(expectedNS==net_salary) testPassed = true;

    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    }

    return 0;
}