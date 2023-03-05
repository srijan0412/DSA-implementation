#include <bits/stdc++.h>
using namespace std;

// to create mask you need two parts : a. 1110000 and b. 0000000000111
int clear_range(int a1, int st, int ed){
    int a = ~(0)<<ed+1;
    int b = (1<<st)-1;
    int mask = a|b;
    int number = a1&b;
    return (number);
}

int main(){
    int a, start, end; cin >> a >> start >> end;
    a=clear_range(a, start, end);
    cout << a << endl;
    return 0;
}