// Leet-Code : Subarray's sum equals to k

// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.

// # Approaches to solve this problem
// Bruteforce - Bruteforce. O(N^3) sc
// Better - Bruteforce(sum loop is removed) O(N^2) sc 
// Optimal - prefix sum approach. O(N) O(N)

#include <bits/stdc++.h>

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int preSum = 0, cnt = 0;
        for (int i=0; i<nums.size(); i++) {
            preSum += nums[i];
            int remove = preSum -k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
    return cnt;
    }
};