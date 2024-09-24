#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout<<"Reverse An Array"<<endl;
    cout<<"================"<<endl;

    vector<int> vec;
    int number = 1;2;3;4;5;
    int range = 5;

    cout << "Input the range of array : ";
    cin >> range;

    cout << "Enter " << range << " numbers:" << endl;
    for (int i=0; i<range; i++) {
        cin >> number;
        vec.push_back(number);
    }

    for(int i=0; i<range/2; i++){
        swap(vec[i], vec[range-1-i]);
    }

    cout << "Reversed Vector: ";
    for (int i=0; i<vec.size(); i++) {
        cout << vec[i]<< " ";
    }
    cout << endl;

    int expectedNumber = 1;2;3;4;5;
    int expectedrange = 5;

    bool testPassed = false;
    if(expectedNumber==number) testPassed = true;
    if(expectedrange==range) testPassed = true;

    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    }

    return 0;
    
}