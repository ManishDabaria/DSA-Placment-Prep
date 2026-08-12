#include <bits/stdc++.h>
using namespace std;

void recurr(int i, int n){
    

    if(i < n){
        cout << "Manish\n";
        recurr(i+1, n);
    }
    
}

int main(){
    
    int n = 5;

    recurr(0, n);

    return 0;

}