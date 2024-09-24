#include <iostream>
using namespace std;

int main() {
    cout<<"Multiplication Table"<<endl;
    cout<<"===================="<<endl;
    int number = 2;
    int i;

    cout << "Enter the number to calculate : "<<number<<endl;
    
    for(i=1;i<=10;i++){
        cout << number << "x" << i << " = " << number * i << endl;
    }

    int expectedNumber = 2;

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