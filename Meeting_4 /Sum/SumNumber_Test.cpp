#include <iostream>
using namespace std;

int main() {
    cout<<"Sum of Natural Number"<<endl;
    cout<<"====================="<<endl;
    
    int number=8;
    int i;
    cout << "Enter the number to calculate : "<<number<<endl;
    
    int sum = 0;

    for(i=1;i<=number;i=i+1){
        sum = sum + i;
    }
    
    cout << "Sum of Natural Numbers = " << sum << endl;

    int expectedNumber = 8;
 
    bool testPassed = false;
    if(expectedNumber==number) testPassed = true;

    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    }

    return 0;
}

