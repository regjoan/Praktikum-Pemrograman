#include <iostream>
using namespace std;
    
int main() {
    struct StudentRec{
        int nim;
        float midterm;
        float final;
        int average;
    };

    StudentRec theStudent[50];
    
    int n = 3;  
    
    cout << "Student Average Score"<<endl;
    cout<<"================="<<endl;
    
    cout<<"How many students? ";
    cin>>n;
    
    cout<<"The inputed data"<<endl;
    
    for(int i=0; i<n; i++){
        theStudent[0].nim = 101;
        theStudent[0].midterm = 80;
        theStudent[0].final = 90;

        theStudent[1].nim = 102;
        theStudent[1].midterm = 86;
        theStudent[1].final = 90;

        theStudent[2].nim = 103;
        theStudent[2].midterm = 89;
        theStudent[2].final = 95;
    }
    
    for(int i=0; i<n; i++){
        cout<<"The NIM : "<<theStudent[i].nim<<endl;
        theStudent[i].average = (theStudent[i].midterm+theStudent[i].final)/2;
        cout<<"The Average Score : "<<theStudent[i].average;
        cout<<endl;
        cout<<endl;
    }
    
    int expectedAverage101 = 85;
    int expectedAverage102 = 88;
    int expectedAverage103 = 92;

    bool testPassed = false;
    if(expectedAverage101==theStudent[0].average) testPassed = true;
    if(expectedAverage102==theStudent[1].average) testPassed = true;
    if(expectedAverage103==theStudent[2].average) testPassed = true;

    if(testPassed){
        cout<<"Test Passed"<<endl;
    }
    else{
        cout<<"Test Failed"<<endl;
    } 
    return 0;
}
