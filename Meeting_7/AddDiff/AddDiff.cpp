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
        float number1, number2;
        cout<<"Enter number 1 : ";
        cin>>number1;
        cout<<"Enter number 2 : ";
        cin>>number2;

        float add, diff;
        
        add = addition(number1, number2);
        diff = difference(number1, number2);
        
        cout<<"The addition is : "<<add<<endl;
        cout<<"The difference is : "<<diff;
    
    return 0;
}
