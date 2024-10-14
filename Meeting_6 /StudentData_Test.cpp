#include <iostream>
using namespace std;
    
int main() {
    struct StudentRec{
        string nim;
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
        cout<<"NIM : ";
        theStudent[0].nim = 101;
        cout<<"UTS value : ";
        theStudent[0].midterm = 80;
        cout<<"UAS value : ";
        theStudent[0].final = 90;
        cout<<endl;

        cout<<"NIM : ";
        theStudent[1].nim = 102;
        cout<<"UTS value : ";
        theStudent[1].midterm = 86;
        cout<<"UAS value : ";
        theStudent[1].final = 90;
        cout<<endl;

        cout<<"NIM : ";
        theStudent[2].nim = 103;
        cout<<"UTS value : ";
        theStudent[2].midterm = 89;
        cout<<"UAS value : ";
        theStudent[2].final = 95;
        cout<<endl;
    }
        
    cout<<"================"<<endl;
    cout<<endl;
    
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
    
    system("Pause");
    return 0;
}
