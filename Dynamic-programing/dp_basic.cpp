// This program is to get the fibonacci term at n, from recursion method 
// by using Dynamic Programming
#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp){
    if (n<=1) return n;

    if (dp[n] != -1) return dp[n];

    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}

int main(){
    int n; cin >> n;
    vector<int> f(n+1, -1);
    cout << fib(n, f) << endl;

    for (auto c: f){
        cout << c << " ";
    }
    return 0;
}