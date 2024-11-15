#include <iostream>
#include <string>
using namespace std;

struct dataList{
    long long NISN;
    string name;
    int value;
};

void showData (dataList data[], int n) { 
    for (int i = 0; i < n; i++) {
        cout << data[i].NISN << "\t" << data[i].name << "\t" << data[i].value << endl;
    }
}

void bubbleSortNISN(dataList data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j].NISN < data[j + 1].NISN) {
                dataList temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void bubbleSortValue(dataList data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j].value < data[j + 1].value) {
                dataList temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}


int main() {
    dataList data[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    int n = sizeof(data) / sizeof(data[0]);

    cout<<"Data Before Sorting"<<endl;
    cout<<"==================="<<endl;
    showData(data, n);
    cout<<endl;

    dataList dataTestNISN[] = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };

    cout<<"Data Sorting by NISN"<<endl;
    cout<<"==================="<<endl;
    bubbleSortNISN(data, n);
    showData(data, n);

    cout<<endl;

    dataList dataTestValue[] = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };

    cout<<"Data Sorting by Value"<<endl;
    cout<<"==================="<<endl;
    bubbleSortValue(data, n);
    showData(data, n);

    return 0;
}