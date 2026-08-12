#include <iostream>
using namespace std;


void print2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=2*(n-i)-1; j++){
            cout << " ";
        }

        for(int k=0; k<2*i+1; k++){
            cout << "* ";
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


/*
Output: 

1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

*/