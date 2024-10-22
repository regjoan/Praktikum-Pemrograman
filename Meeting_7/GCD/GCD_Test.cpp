#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0){
        return a;
    }else{
    return gcd(b, a % b);
    }
}

int main() {
    int num1 = 16, num2 = 96;
    
    cout << "Enter two numbers: ";
    cout << "16 & 96"<<endl;

    int result = gcd(num1, num2);

    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    int expectedGCD = 16;

    bool testPassed = false;
    if(expectedGCD==result) testPassed = true;
    
    cout<<endl;
    
    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    } 
    
    return 0;
}