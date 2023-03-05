#include <bits/stdc++.h>
using namespace std;

// In this function we are moving to the basecase and
//  along with it we are printing the value of n
void to_one(int n){
    // base case
    if (n==0){
        return;
    }

    // recursive case
    cout << n << " ";
    to_one(n-1);
}

// In this function we first move to base case and then printing back the n while returning 
void to_n(int n){
    // base case
    if (n==0){
        return;
    }

    // recursive case]
    to_n(n-1);
    cout << n << " ";
}

int main(){
    int n; cin >> n;
    to_one(n);
    cout << endl;
    to_n(n);
    return 0;
}