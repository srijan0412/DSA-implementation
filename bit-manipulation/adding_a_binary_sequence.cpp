#include <bits/stdc++.h>
using namespace std;

// you are given two 32 bit numbers ,n and m, and to set all bits i to j in n equal to m. (m become a substring of n).

int main(){
    int x = 15;
    int y = 2;
    int i = 1;
    int j = 2;

    int temp = (1<<(j+1-i))-1;
    int mask1 = ~(temp<<i);

    x = x&mask1;
    y = y << i;
    x = x|y;

    cout << x << endl;

    return 0;
}