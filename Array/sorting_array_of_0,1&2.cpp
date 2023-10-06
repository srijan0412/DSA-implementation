// Leet-Code : Sort Colors
// Given an array nums with n objects colored red, white, or blue, sort them in - place so that
// objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and2 to represent the color red, white, and blue, respectively.

// # Approaches to solve this problem
// Bruteforce - by using any sorting algorithm O(nlogn) O(1)
// Better - by counting 3 in three variables O(2N ) O(1)
// Optimal - Dutch National flag algorithm O(N) O(1)

// This problem is a variation of the popular Dutch National flag algorithm. 
// This algorithm contains 3 pointers i.e. low, mid, and high, and 3 main rules.  The rules are the following:

// arr[0….low-1] contains 0. [Extreme left part]
// arr[low….mid-1] contains 1.
// arr[high+1….n-1] contains 2. [Extreme right part], n = size of the array

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while ( mid<=high ) {
            if ( nums[mid]==0 ) {
                swap( nums[low], nums[mid] );
                low++;
                mid++;
            }
            else if ( nums[mid]==1 ) {
                mid++;
            }
            else {
                swap ( nums[mid], nums[high] );
                high--;
            }
        }
    }
};