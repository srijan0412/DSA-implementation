// LeetCode : Longest consecutive Subsequence

// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
//You must write an algorithm that runs in O(n) time.

// # Approaches to solve this problem
// Bruteforce - Bruteforce. O(N^2) O(1)
// Better - sort and iterate. O(NLogN+N) O(1)
// Optimal -  Using set data structure.

// Optimal Approach(Using Set data structure): 
// We will adopt a similar approach to the brute-force method but with optimizations in the search process. 
// Instead of searching sequences for every array element as in the brute-force approach, 
// we will focus solely on finding sequences only for those numbers that can be the starting numbers of the sequences. 
// This targeted approach narrows down our search and improves efficiency.

// We will do this with the help of the Set data structure.

#import <unordered_set>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if ( n==0 ) return 0;
        int longest = 1;
        unordered_set<int> st;
        for (int i=0; i<n; i++) {
            st.insert(nums[i]);
        }
        for (auto it : st) {
            if (st.find(it-1)==st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()) {
                    x = x+1;
                    cnt = cnt+1;
                }
            longest = max (longest, cnt);
            }
        }
        return longest;
    }
};