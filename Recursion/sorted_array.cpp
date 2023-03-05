#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int n){
    // base case
    if (n==1){
        return true;
    }
    
    // recursive case
    if (arr[0]<arr[1] and issorted( arr+1, n-1)){
        return true;
    }
    return false;
}

int main(){
    int arr[] = { 1, 2, 4, 5, 7, 8, 9 };
    cout << issorted(arr, 8) << endl;
    return 0;
}