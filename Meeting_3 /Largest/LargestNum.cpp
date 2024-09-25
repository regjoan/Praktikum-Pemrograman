#include <iostream>
using namespace std;

int main()
{
    cout<<"Largest Number"<<endl;
    cout<<"================"<<endl;
    
    cout<<"Enter a number : "<<endl;
    
    int a, b, c;
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<"Enter the 3rd number : ";
    cin>>c;
    
    if(a>=b && a>=c){
        cout<<"Largest number : "<<a;        
    }
    else if(b>=a && b>=c){
        cout<<"Largest number : "<<b;
    }
    else{
        cout<<"Largest number : "<<c;
    }

    return 0;
}
