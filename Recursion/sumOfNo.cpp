#include <bits/stdc++.h>
using namespace std;

int sumOfnum(int n){

    if(n==0) return 0;

    return n + sumOfnum(n-1);
    
}


int main(){

    int n = 5;

    int ans = sumOfnum(n);

    cout << "Sum of Number is : " << ans << endl;
    return 0;

}