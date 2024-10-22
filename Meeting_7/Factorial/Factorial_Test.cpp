#include <iostream>
using namespace std;

 float factorial(float x){
        if(x>1){
            return x*factorial(x-1);
        }else{
            return 1;
        }
}

int main() {
    cout<<"Factorial Calculator"<<endl;
    int x = 5;
    cout<<"Factorial result : "<<factorial(x)<<endl;

    int expectedFactorial = 120;

    bool testPassed = false;
    if(expectedFactorial==factorial(x)) testPassed = true;
    
    cout<<endl;
    
    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    } 
    return 0;
}