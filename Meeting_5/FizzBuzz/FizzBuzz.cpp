#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    cout << "FizzBuzz" << endl;
    cout << "========" << endl;
    
    vector<string> result;
    
    for (int i=0; i<=100; ++i){
        if(i%3 == 0 && i%5 == 0){
            result.push_back("FizzBuzz");
        }
        else if(i%3 == 0){
            result.push_back("Buzz");
        }
        else if(i%5 == 0){
            result.push_back("Fizz");
        }
        else{
            result.push_back(to_string(i));
        }
    }
        for(int i=1; i<=100; i++){
            cout<<result[i]<<endl;
        }
    
    return 0;
}
