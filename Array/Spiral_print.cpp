// Leet-code : spiral print 

// problem statemtent : you have given a 2d matrix you have to print it in a spiral __ORDER_BIG_ENDIAN__

// only optimal solution exist:
// time complexity : O(n*m) because we are iterating on all the elements in the matrix
// space complexity : O(n*m) storing all the elements of an array


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;
        while (left<=right && bottom>=top) {
            for (int i=left; i<=right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for (int j=top; j<=bottom; j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            if (top <= bottom) {
                for (int k=right; k>=left; k--){
                    ans.push_back(matrix[bottom][k]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int l=bottom; l>=top; l--) {
                    ans.push_back(matrix[l][left]);
                }
                left++;
            }
        }
        return ans;
    }
};