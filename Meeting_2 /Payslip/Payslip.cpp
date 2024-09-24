#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    cout << "Payslip for an employee" << endl;
    
    string name;
    	cout << "Name : ";
    	cin >> name;
    
    int gross_salary;
    	cout << "Gross Salary : Rp";
   	cin >> gross_salary;
    
    int tax;
    	tax = gross_salary*0.2;
    	cout << "Tax: Rp" << tax << endl;
    
    int installment;
    	cout << "Installment: Rp";
    	cin >> installment;
    
    int insurance;
   	cout << "insurance: Rp";
    	cin >> insurance;
    
    int net_salary;
    	net_salary = gross_salary - (tax + installment + insurance);
    	cout << "Net Salary: Rp" << net_salary;
   
    if (net_salary<0){
        cout << "Your money management needs to be monitored and corrected :(";
    }
    else {   
    }
    return 0;
}
