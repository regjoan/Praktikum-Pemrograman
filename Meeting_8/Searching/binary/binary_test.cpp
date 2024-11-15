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

int binarySearch(dataList data[], int n, long long target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (data[mid].NISN == target) {
            return mid;  // NISN found
        } else if (data[mid].NISN < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0; 
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

    insertionSortNISN(data, n);

    long long targetNISN = 9950310962;
    int result = binarySearch(data, n, targetNISN);
    if (result != -1) {
        cout << "Test Passed, NISN " << targetNISN << " as Ronaldo Valentino Uneputty " << result << endl;
    } else {
        cout << "Test Failed: Data with NISN " << targetNISN << " not found." << endl;
    }

    return 0;
}
