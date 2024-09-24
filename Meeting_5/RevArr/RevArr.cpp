#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout<<"Reverse An Array"<<endl;
    cout<<"================"<<endl;

    vector<int> vec;
    int number, range;

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

    return 0;
}