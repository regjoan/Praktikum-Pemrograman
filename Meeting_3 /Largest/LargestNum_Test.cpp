#include <iostream>
using namespace std;

int main()
{
    cout<<"Largest Number"<<endl;
    cout<<"================"<<endl;
    
    cout<<"Enter a number : "<<endl;
    
    int a = 9;
    int b = 3;
    int c = 2;
    	cout << "Enter the 1st number : "<<a<<endl;
    	cout << "Enter the 2nd number : "<<b<<endl;
    	cout << "Enter the 3rd number : "<<c<<endl;
    
    if(a>=b && a>=c){
        cout<<"Largest number : "<<a<<endl;
    }
    else if(b>=a && b>=c){
        cout<<"Largest number : "<<b<<endl;
    }
    else{
        cout<<"Largest number : "<<c<<endl;
    }

    int expectedA = 9;
    int expectedB = 3;
    int expectedC = 2;

    bool testPassed = false;
    if(expectedA==a) testPassed = true;
    if(expectedB==b) testPassed = true;
    if(expectedC==c) testPassed = true;

    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    }

    return 0;
}

