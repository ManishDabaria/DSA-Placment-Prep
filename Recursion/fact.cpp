#include <bits/stdc++.h>
using namespace std;

int recc(int n){
    if (n==0) return 1;

    return n * recc(n-1);
}

int main(){

    int n = 5;

    int ans = recc(n);

    cout << "Recursion is : " << ans << endl;
    return 0;

}