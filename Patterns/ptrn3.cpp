#include <iostream>
using namespace std;


void print2(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print2(n);

}