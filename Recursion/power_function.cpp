#include <bits/stdc++.h>
using namespace std;

// Fuction to calculate power 
int power(int a, int n){
    // base-case
    if (n==0){
        return 1;
    }

    // recursive case
    return a*power(a,n-1);
}


// optimised one
int power_(int a, int n){
    // base-case
    if (n==0){
        return 0;
    }

    // recursive case
    int subans = power_(a, n/2);
    int ans = subans * subans;
    if (n%2==1){
        return ans*a;
    }
    return a;
}

int main(){
    int n, a; cin >> a >> n;
    cout << power(a, n) << endl;
    cout << power_(a, n) << endl;
    return 0;
}