#include <iostream>
using namespace std;

int main() {
    int number;
    int i;
    int range;

    cout << "Enter the number to calculate : ";
    cin >> number;
    cout << "Enter the number for range of multiplication : ";
    cin >> range;
    
    for(i=1;i<=range;i++){
        cout << number << "x" << i << " = " << number * i << endl;
    }

    return 0;
}

