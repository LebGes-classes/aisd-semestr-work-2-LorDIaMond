#include <iostream>
#include <vector>
using namespace std;

int getNextGap(int gap) {
    gap = (gap * 10) / 13;
    if (gap < 1)
        return 1;
    return gap;
}

void combSort(vector<int>& arr) {
    int n = arr.size();
    int gap = n;
    bool swapped = true;

    while (gap != 1 || swapped) {
        gap = getNextGap(gap);
        swapped = false;

        for (int i = 0; i < n - gap; i++) {
            if (arr[i] > arr[i + gap]) {
                swap(arr[i], arr[i + gap]);
                swapped = true;
            }
        }
    }
}

int main() {
    vector<int> arr = { 8, 4, 1, 56, 3, -44, 23, -6, 28, 0 };

    for (int x : arr) cout << x << " ";

    combSort(arr);

    cout << "\n";
    for (int x : arr) cout << x << " ";

    return 0;
}