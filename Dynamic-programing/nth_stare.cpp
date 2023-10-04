#include <bits/stdc++.h>
using namespace std;

// Program to calculate no. of factors of a number.

int main(){
    int n; cin >> n;
    unordered_map<int, int> um;
    for (int i=2; i<=n; i++){
        while (n%i==0){
            um[i]++;
            n/=i;
        }
    }
    int ans=1;
    for (auto c: um) {
        ans *= c.second+1 ;
    }
    if (ans==1){
        cout << 2 << endl;
    }
    else {
        cout << ans << endl;
    }
    return 0;
}