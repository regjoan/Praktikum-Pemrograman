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
    
    int n;  
    
    cout << "Student Average Score"<<endl;
    cout<<"================="<<endl;
    
    cout<<"How many students? ";
    cin>>n;
    
    cout<<"Input the data"<<endl;
    
    for(int i=0; i<n; i++){
        cout<<"NIM : ";
        cin>>theStudent[i].nim;
        cout<<"UTS value : ";
        cin>>theStudent[i].midterm;
        cout<<"UAS value : ";
        cin>>theStudent[i].final;
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
    return 0;
}
