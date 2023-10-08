// Leet-code : Next Permutation

// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. 
// More formally, if all the permutations of the array are sorted in one container according to their lexicographical 
// order, then the next permutation of that array is the permutation that follows it in the sorted container. 
// If such arrangement is not possible, the array must be rearranged as the lowest possible order 
// (i.e., sorted in ascending order).

// # Approaches to solve this problem
// Bruteforce - Find all permutation and finding next. O(N!) O(N!)
// Better - C++ STL. O(N) O(1)
// Optimal - Logical Approach O(3N) O(1)

// Approach:
// 1. Find the break-point, i: Break-point means the first index i from the back of the given 
// array where arr[i] becomes smaller than arr[i+1].
// For example, if the given array is {2,1,5,4,3,0,0}, the break-point will be index 1(0-based indexing). 
// Here from the back of the array, index 1 is the first index where arr[1] i.e. 1 is smaller 
// than arr[i+1] i.e. 5.
// To find the break-point, using a loop we will traverse the array backward and store the index i where arr[i] is less than the value at index (i+1) i.e. arr[i+1].

// 2. If such a break-point does not exist i.e. if the array is sorted in decreasing order, the given permutation is the last one in the sorted order of all possible permutations. So, the next permutation must be the first i.e. the permutation in increasing order.
// So, in this case, we will reverse the whole array and will return it as our answer.

// 3. If a break-point exists:
// Find the smallest number i.e. > arr[i] and in the right half of index i(i.e. from index i+1 to n-1) and swap it with arr[i].
// Reverse the entire right half(i.e. from index i+1 to n-1) of index i. And finally, return the array.


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for (int i=n-2; i>=0; i--) {
            if ( nums[i] < nums[i+1] ) {
                ind = i;
                break;
            }
        }
        if ( ind == -1) {
            reverse(nums.begin(), nums.end());
            return ;
        }
        for (int i=n-1; i>ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind+1, nums.end());
    }
};