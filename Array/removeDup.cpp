//Remove duplicates from a sorted array in-place and return the new length.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (n == 0) return 0;

    int newLength = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[newLength] = arr[i];
            newLength++;
        }
    }

    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
