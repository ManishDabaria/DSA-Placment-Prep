#include <iostream>
#include <cmath>
using namespace std;

int chck_armstrng(int n){

    int sum = 0;
    int temp = n;
    int n_len;

    while(temp > 0){
        n_len++;
        temp = temp/10;
    }

    while( temp > 0){
        int digit = temp % 10;
        sum = sum + pow(digit, n_len );
        temp = temp / 10;
    }
    
    return sum;

}



int main(){
    int num;
    cout << "Enter the number to check is it Armstrong or not : ";
    cin >> num;

    int ans = chck_armstrng(num);
    
    if (num == ans){
        cout << "Yes, It is armstrong number.";
    }

    else{
        cout << "No, it's not armstrong number.";
    }

    return 0;
}