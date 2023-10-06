// Leet-Code : Majority Element
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.


// # Approaches to solve this problem
// Bruteforce - Nested Loop approach O(N^2) O(1)
// Better - Hashing O(2N) O(N)
// Optimal - Moore's voting algorithmn

// Intuition:
// If the array contains a majority element, its occurrence must be greater than the floor(N/2). Now, we can say that the count of minority elements and majority elements is equal up to a certain point in the array. So when we traverse through the array we try to keep track of the count of elements and the element itself for which we are tracking the count. 

// After traversing the whole array, we will check the element stored in the variable. If the question states that the array must contain a majority element, the stored element will be that one but if the question does not state so, then we need to check if the stored element is the majority element or not. If not, then the array does not contain any majority element.

// Approach: 
// 1. Initialize 2 variables:
//      Count –  for tracking the count of element
//      Element – for which element we are counting
// 2. Traverse through the given array.
//      If Count is 0 then store the current element of the array as Element.
//      If the current element and Element are the same increase the Count by 1.
//      If they are different decrease the Count by 1.
// 3. The integer present in Element should be the result we are expecting 

#include <bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem;
        int cnt = 0;
        for (int i=0; i<nums.size(); i++) {
            if (cnt == 0) {
                cnt++;
                elem = nums[i];
            }
            else if (nums[i]==elem) {
                cnt++;
            }
            else {
                cnt--;
            }
        }
        return elem;
    }
};