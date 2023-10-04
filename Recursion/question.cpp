#include <bits/stdc++.h>
using namespace std;


int steps (int p, int n) {
    if (p == n) {
        return 0;
    }
    if ( p == n-1) {
        return 1;
    }
    if ( p == n-2) {
        return 2;
    }

    return (steps(p+1, n) + steps(p+2, n));
}

int main(){
    int n; cin >> n; 
    cout << steps(0, n);
    return 0;
}