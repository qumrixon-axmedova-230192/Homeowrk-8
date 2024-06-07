#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void fahrenheitToCelsius(float &fahrenheit, float &celsius) {
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
}

void problem1() {
    float fahrenheit, celsius;
    cin >> fahrenheit;
    fahrenheitToCelsius(fahrenheit, celsius);
    cout << fixed << setprecision(4) << celsius << endl;
}

void problem2() {
    vector<int> values;
    int value;
    while (cin >> value && value != 0) {
        values.push_back(value);
    }
    for (int &val : values) {
        if (val % 2 == 0) val = 2;
        else val = 1;
    }
    for (const int &val : values) {
        cout << val << " ";
    }
    cout << endl;
}

void func(int *x, int *y) {
    *y = 7 * (*x) - 5;
}

void problem3() {
    int x, y;
    cin >> x;
    int *ptrX = &x;
    int *ptrY = &y;
    func(ptrX, ptrY);
    cout << *ptrX << endl;
    cout << *ptrY << endl;
}

void problem4() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int duplicates = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) == *(arr + j)) {
                duplicates++;
                break;
            }
        }
    }
    cout << duplicates << endl;
    delete[] arr;
}

int maxElement(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

void problem5() {
    int size1, size2;
    cin >> size1;
    int *arr1 = new int[size1];
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    cin >> size2;
    int *arr2 = new int[size2];
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    int max1 = maxElement(arr1, size1);
    int max2 = maxElement(arr2, size2);
    cout << max1 * max2 << endl;
    delete[] arr1;
    delete[] arr2;
}

int main() {
    return 0;
}
