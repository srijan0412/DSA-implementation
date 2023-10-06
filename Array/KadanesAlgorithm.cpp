// Leet-code : Maximum Subarray
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// # Approaches to solve this problem
// Optimal : Kadane's algorithm O(n) O(1)

// Intuition:
// The intuition of the algorithm is not to consider the subarray as a part of the answer 
// if its sum is less than 0. A subarray with a sum less than 0 will always reduce our answer 
// and so this type of subarray cannot be a part of the subarray with maximum sum.

// Here, we will iterate the given array with a single loop and while iterating we will add the 
// elements in a sum variable. Now, if at any point the sum becomes less than 0, we will set the 
// sum as 0 as we are not going to consider any subarray with a negative sum. 
// Among all the sums calculated, we will consider the maximum one.

// Thus we can solve this problem with a single loop.

// Approach:
// The steps are as follows:

// We will run a loop(say i) to iterate the given array.
// Now, while iterating we will add the elements to the sum variable and consider the maximum one.
// If at any point the sum becomes negative we will set the sum to 0 as we are not going to consider
// it as a part of our answer.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0, ms=0;
        for(int i=0; i<nums.size(); i++){
            cs += nums[i];
            if(cs<0){
                cs=0;
            }
            ms=max(ms,cs);
        }
        if (ms==0){
            return *max_element(nums.begin(),nums.end());
        }
        return ms;
    }
};