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
    cout<<"Enter number : ";
    int x;
    cin>>x;
    cout<<"Factorial result : "<<factorial(x)<<endl;
}