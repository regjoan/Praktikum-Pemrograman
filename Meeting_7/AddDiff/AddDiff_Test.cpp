#include <iostream>
using namespace std;
    
    float addition(float number1, float number2){
        float result = (number1+number2);
        return result;
    }
    float difference(float number1, float number2){
        float result = (number1-number2);
        return result;
    }
    
    int main(){
        cout<<"Simple Mathematic Operation"<<endl;
        float number1 = 5, number2 = 9;
        float add, diff;
        
        add = addition(number1, number2);
        diff = difference(number1, number2);
        
        cout<<"The addition is : "<<add<<endl;
        cout<<"The difference is : "<<diff;

    int expectedAddition = 14;
    int expectedDifference = -4;

    bool testPassed = false;
    if(expectedAddition==add) testPassed = true;
    if(expectedDifference==diff) testPassed = true;

    cout<<endl;
    
    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    } 
    return 0;
}

