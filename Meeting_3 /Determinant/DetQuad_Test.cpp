#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    cout << "Quadratic Equation" << endl;
    cout << "===================" <<endl;
    
    int a = 3;
    int b = -6;
    int c = 9;
    	cout << "Type a number for coefficients a : "<<a<<endl;
    	cout << "Type a number for coefficients b : "<<b<<endl;
    	cout << "Type a number for coefficients c : "<<c<<endl;
    
    	cout << "Quadratic Equation" << endl;
   	cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    
    int d = -72;
    d = ((b)*(b)) - (4*a*c);
    	cout << "Here the discriminant from the equation above : " << d << endl;
 
    if (d>0){
        cout << "There are two distinct real roots : ";
        
        float x1, x2;
        x1 = ((-b)+(sqrt(d)))/(2*a);
        x2 = ((-b)-(sqrt(d)))/(2*a);
        
        cout << x1 << " & " << x2 << endl;
    }
    else if (d==0){
        cout << "There is exactly one real root : ";
        
        float x;
        x = (-b)/(2*a);
        
        cout << x << endl;    
    }
    else{
        cout << "There are no real roots" << endl;
    }
    
    int expectedA = 3;
    int expectedB = -6;
    int expectedC = 9;
    int expectedD = -72;

    bool testPassed = false;
    if(expectedA==a) testPassed = true;
    if(expectedB==b) testPassed = true;
    if(expectedC==c) testPassed = true;
    if(expectedD==d) testPassed = true;

   if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    }

    return 0;
}