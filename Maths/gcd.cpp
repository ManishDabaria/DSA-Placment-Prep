#include <iostream>
using namespace std;

int gcd_two_number(int x, int y){
    
    int a = x;
    int b = y;

    
    while (b !=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a ;
    
    cout << "Enter the value of b: ";
    cin >> b;

    int ans = gcd_two_number(a, b);

    cout << "Greatest common integer of two number is : " << ans << endl;

    return 0;

}