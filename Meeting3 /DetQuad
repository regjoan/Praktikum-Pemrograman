#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Quadratic Equation" << endl;
    
    int a, b, c;
    
    cout << "Type a number for coefficients a : ";
    cin >> a;
    cout << "Type a number for coefficients b : ";
    cin >> b;
    cout << "Type a number for coefficients c : ";
    cin >> c;
    cout << "Quadratic Equation" << endl;
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    
    int d;
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
return 0;
}

