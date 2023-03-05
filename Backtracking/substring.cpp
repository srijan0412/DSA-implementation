#include <bits/stdc++.h>
using namespace std;

void findsubset(char *str, char *output, int i, int j){
    // base case :
    if (str[i]=='\0'){
        output[j]='\0';
        cout << output << endl;
        return;
    }

    // rec case :
    // include ith letter 
    output[j]=str[i];
    findsubset(str, output, i+1, j+1);
    // exculde ith letter
    findsubset(str, output, i+1, j);
}

int main(){
    char str[100];
    char output[100];
    cin >> str ;
    findsubset(str, output, 0, 0);
    return 0;
}