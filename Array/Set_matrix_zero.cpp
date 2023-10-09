// Leet-Code : Set matrix zero

// Intuition:
// In the previous approach, the time complexity is minimal as the traversal of a matrix takes at least O(N*M)(where N = row and M = column). 
// In this approach, we can just improve the space complexity. 
// So, instead of using two extra matrices row and col, we will use the 1st row and 1st column
// of the given matrix to keep a track of the cells that need to be marked with 0. But here comes a problem. 
// If we try to use the 1st row and 1st column to serve the purpose, the cell matrix[0][0] is taken twice. 
// To solve this problem we will take an extra variable col0 initialized with 1.
// Now the entire 1st row of the matrix will serve the purpose of the row array. 
// And the 1st column from (0,1) to (0,m-1) with the col0 variable will serve the purpose of the col array.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if (j != 0) matrix[0][j] = 0;
                    else col0 = 0;
                }
            }
        }
        for (int i=1; i<n; i++){
            for (int j=1; j<m; j++) {
                if (matrix[i][j] != 0) {
                    if (matrix[0][j]==0 || matrix[i][0] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if (matrix[0][0] == 0){
            for (int j =0; j<m; j++) matrix[0][j] = 0;
        }
        if (col0 == 0) {
            for (int i=0; i<n; i++) matrix[i][0] = 0;
        }
    }
};