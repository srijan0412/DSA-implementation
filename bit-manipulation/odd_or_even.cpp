#include <bits/stdc++.h>
using namespace std;

// As we know that : 
// the binary number which ends with :
// 0 is always even 
// 1 is always odd
// so we have to check the last digit in a binary number :

int main(){
    int a; cin >> a;
    
    if (a&1){
        cout << "odd";
    }
    else {
        cout <<  "even";
    }
    return 0;
}