// Leet-Code : Pascal's Triangle

// Given an integer numRows, return the first numRows of Pascal's triangle.

// # Approaches to solve this problem
// Bruteforce - nCr (Native approach) - O(N^3) O()
// Better -  Reduced nCr - better approach 
// Optimal - 

// Now, in the optimal approach of variation 2, we have learned how to generate a row in O(n) time complexity. 
// So, in order to optimize the overall time complexity, we will be using that approach for every row. 
// Thus the total time complexity will reduce.

// Code -
class Solution {
public:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / (col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i=1; i<=numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};

// My solution
class MySolution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for (int i=0; i<numRows; i++){
            vector<int> temp(i+1, 1);

            for (int j=1; j<i; j++){
                temp[j]=answer[i-1][j]+answer[i-1][j-1];
            }

            answer.push_back(temp);
        }
        return answer;        
    }
};