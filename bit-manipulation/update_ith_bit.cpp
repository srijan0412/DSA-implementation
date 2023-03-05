#include <bits/stdc++.h>
using namespace std;

void update_ith_bit(int *a, int pos, int bit){
    int mask1 = ~(1<<pos);
    *a = *a & mask1;
    if (bit==1){
        int mask2 = 1<<pos;
        *a = *a | mask2;
    }
}

int main(){
    int a, position, bit; cin >> a >> position >> bit;
    update_ith_bit(&a, position, bit);
    cout << a << endl;
    return 0;
}