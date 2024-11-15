#include <iostream>
#include <string>
#include <cassert>
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

void selectionSortNISN(dataList data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i; 
        for (int j = i + 1; j < n; j++) {
            if (data[j].NISN > data[maxIndex].NISN) { 
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            dataList temp = data[i];
            data[i] = data[maxIndex];
            data[maxIndex] = temp;
        }
    }
}

void selectionSortValue(dataList data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j].value > data[maxIndex].value) { 
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            dataList temp = data[i];
            data[i] = data[maxIndex];
            data[maxIndex] = temp;
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

    cout << "Data Before Sorting" << endl;
    cout << "===================" << endl;
    showData(data, n);
    cout << endl;

    selectionSortNISN(data, n);
    cout << "Data Sorting by NISN" << endl;
    cout << "===================" << endl;
    showData(data, n);
 
    cout << endl;

    selectionSortValue(data, n);
    cout << "Data Sorting by Value" << endl;
    cout << "===================" << endl;
    showData(data, n);


    return 0;
}
