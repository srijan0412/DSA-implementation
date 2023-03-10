#include <bits/stdc++.h>
using namespace std;

void printBinary(int a){
    for (int i=10; i>0; i--){
        cout << (1<<i)&a;
    }
    cout << endl;
}

int main(){
    int a = 5;
    printBinary(a);
    return 0;
}