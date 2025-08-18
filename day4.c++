#include <bits/stdc++.h>
using namespace std;

int main() {
    long long arr1[] = {1, 3, 5, 7};
    long long arr2[] = {2, 4, 6, 8};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int left = n - 1;
    int right = 0;

    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        } else {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    
    cout << "arr1: ";
    for (int i = 0; i < n; ++i)
        cout << arr1[i] << " ";
    cout << "\narr2: ";
    for (int i = 0; i < m; ++i)
        cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
