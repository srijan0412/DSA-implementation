#include <bits/stdc++.h>
using namespace std;

// logic in copy :)
int get_ith_bit(int a, int i){
    int mask = 1<<i;
    return (a & mask) > 0 ? 1 : 0;
}

int main(){
    int a; cin >> a;
    int pos; cin >> pos;
    cout << get_ith_bit(a, pos);
    return 0;
}