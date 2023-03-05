#include <bits/stdc++.h>
using namespace std;

// logic in copy
void clear_ith_bit(int *a, int pos){
    int mask =  ~(1<<pos);
    *a =  *a&mask;
}

int main(){
    int a, position; cin >> a >> position;
    clear_ith_bit(&a, position);
    cout << a << endl;
    return 0;
}