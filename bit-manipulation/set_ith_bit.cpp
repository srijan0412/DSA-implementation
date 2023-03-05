#include <bits/stdc++.h>
using namespace std;

// logic in copy :)
void set_ith_bit(int *a, int i){
    int mask = 1<<i;
    *a = *a|mask;
}

int main(){
    int a; cin >> a;
    int pos; cin >> pos;
    set_ith_bit(&a, pos);
    cout << a;
    return 0;
}