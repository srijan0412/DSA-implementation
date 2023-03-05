#include <bits/stdc++.h>
using namespace std;

void clear_last_i_bits(int *a, int pos){
    *a=*a>>pos;
    *a=*a<<pos;
}

int main(){
    int a, position; cin >> a >> position;
    clear_last_i_bits(&a, position);
    cout << a;
    return 0;
}