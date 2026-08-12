#include <iostream>
using namespace std;


void print2(int n){
    for(int i=n; i>0; i--){
        for(int j=n; j>0; j--){
            cout << "*" << " ";

        }
        n--;
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print2(n);

}


/*
Output: 
* * * * * 
* * * *
* * *
* *
*

*/