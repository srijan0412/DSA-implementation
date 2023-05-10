#include <bits/stdc++.h>
using namespace std;

// question : print all the subsequences those sum is "sum". or print the number of sub-sequences whose sum is "sum".
int countS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    // basecase
    if (ind == n){
        // if the condition is satisfied
        if ( s == sum ){
            return 1;
        }
        // if the condition is not satisfied
        return 0;
    }

    // Element is picked : 
    ds.push_back(arr[ind]);
    s += arr[ind];
    int l = countS(ind+1, ds, s, sum, arr, n);

    // Element is not picked : 
    s-=arr[ind];
    ds.pop_back();
    int r = countS(ind+1, ds, s, sum, arr, n);

    return r+l;
}


int main(){
    int arr[] = {1, 2, 1};
    int n = 3; 
    int sum = 2;
    vector<int> ds; 
    cout << countS(0, ds, 0, sum, arr, n) << endl;
    return 0;
}