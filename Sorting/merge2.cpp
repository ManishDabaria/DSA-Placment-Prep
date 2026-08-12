#include <iostream>
#include <vector>
using namespace std;   

// Merge function to merge two halves
void merge(vector<int> &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort Algorithm
void mergeSort(vector<int> &arr, int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Unsorted array: \n";
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted array: \n";
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}