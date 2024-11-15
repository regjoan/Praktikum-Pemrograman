#include <iostream>
#include <string>
using namespace std;

struct dataList {
    long long NISN;
    string name;
    int value;
};

void showData(dataList data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data[i].NISN << "\t" << data[i].name << "\t" << data[i].value << endl;
    }
}

void insertionSortNISN(dataList data[], int n) {
    for (int i = 1; i < n; i++) {
        dataList key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j].NISN < key.NISN) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

void insertionSortValue(dataList data[], int n) {
    for (int i = 1; i < n; i++) {
        dataList key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j].value < key.value) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

void sequentialSearchAndUpdate(dataList data[], int n, int targetValue, const string& newName) {
    for (int i = 0; i < n; i++) {
        if (data[i].value == targetValue) {
            data[i].name = newName; 
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

    insertionSortNISN(data, n);
    cout << "Data Sorting by NISN (Descending)" << endl;
    cout << "===================" << endl;
    showData(data, n);

    cout << endl;

    dataList dataReset[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    for (int i = 0; i < n; i++) {
        data[i] = dataReset[i];
    }

    insertionSortValue(data, n);
    cout << "Data Sorting by Value (Descending)" << endl;
    cout << "===================" << endl;
    showData(data, n);

    sequentialSearchAndUpdate(data, n, 60, "Joko");

    cout << endl << "Updated Data (Names with Value 60 changed to Joko)" << endl;
    cout << "===================" << endl;
    showData(data, n);

    return 0;
}
