#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout<<"Reverse An Array"<<endl;
    cout<<"================"<<endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    int range = 5;

    cout << "Input the range of array : " <<endl;

    cout << "Enter " << range << " numbers:" << endl;
    for (int i=0; i<range; i++) {
        cout << vec[i] << " ";
    }

    for(int i=0; i<range/2; i++){
        swap(vec[i], vec[range-1-i]);
    }

    cout << "Reversed Vector: ";
    for (int i=0; i<vec.size(); i++) {
        cout << vec[i]<< " ";
    }
    cout << endl;

    vector<int> expectedVec = {1, 2, 3, 4, 5};
    int expectedrange = 5;

    bool testPassed = false;
    if(expectedVec==vec) testPassed = true;
    if(expectedrange==range) testPassed = true;

    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    }

    return 0;
    
}