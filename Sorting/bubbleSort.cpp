#include <bits/stdc++.h>
using namespace std;    

// Bubble Sort Algorithm
void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i=n-1; i>0; i--){
        bool didSwap = false;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = true;
            }
        }
        if(!didSwap) break;
    }
}
int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Unsorted array: \n";
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    bubbleSort(arr);
    cout << "Sorted array: \n";
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}