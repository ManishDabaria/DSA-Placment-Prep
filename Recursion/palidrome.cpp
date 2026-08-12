#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return f(i+1, s);
}


int main(){
    string s = "madsm";
    int ans = f(0, s);
    if(ans==1){
        cout << "Yes it is.";
    }else{
        cout << "No it is not.";
    }
    return 0;
}