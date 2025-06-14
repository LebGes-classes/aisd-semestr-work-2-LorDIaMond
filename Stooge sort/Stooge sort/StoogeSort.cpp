#include <iostream>
#include <vector>
using namespace std;

void stoogeSort(vector<int>& arr, int l, int h) {
    if (l >= h) return;

    if (arr[l] > arr[h])
        swap(arr[l], arr[h]);

    if (h - l + 1 > 2) {
        int t = (h - l + 1) / 3;

        stoogeSort(arr, l, h - t);

        stoogeSort(arr, l + t, h);

        stoogeSort(arr, l, h - t);
    }
}

int main() {
    vector<int> arr = {2, 14, 52, 30, 11};

    for (int x : arr) {
        cout << x << " ";
    }

    cout << "\n";

    stoogeSort(arr, 0, arr.size() - 1);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}