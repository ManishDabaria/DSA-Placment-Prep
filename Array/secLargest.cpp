#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first, second;
    first = second = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }

    if(second == INT_MIN){
        cout << "No second Largest element found." << endl;
    }
    else{
        cout << "The second Largest element is: " << second << endl;
    }

    return 0;
}