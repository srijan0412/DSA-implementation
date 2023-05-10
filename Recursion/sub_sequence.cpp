#include <bits/stdc++.h>
using namespace std;

// Time complexity : O(n2^n)
// Space complexity : O(n)
void print_ss(int ind, vector<int> &ds, int arr[], int n){
    if (ind == n){
        for (auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // Pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    print_ss(ind+1, ds, arr, n);

    // Did NOT Pick the particular index into the subsequence
    ds.pop_back();
    print_ss(ind+1, ds, arr, n);


}

int main(){
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    print_ss(0, ds, arr, n);
    return 0;
}