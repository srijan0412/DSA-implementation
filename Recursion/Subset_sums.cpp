#include <bits/stdc++.h>
using namespace std;

// Given a list(Arr) of N integer, print sums of all subsets in it.
// Outpus should be printed in increasing order of sums

class Solution {
    public:
    void func(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubset) {
        if (ind == N) {
            sumSubset.push_back(sum);
            return;
        }

        // pick the element 
        func(ind +1, sum + arr[ind], arr, N, sumSubset);

        // Do-not pick the element 
        func(ind+1, sum, arr, N, sumSubset);
    }

    vector<int> subsetSums(vector<int> arr, int N) {
        vector<int> sumSubset;
        func(0, 0, arr, N, subSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }
}