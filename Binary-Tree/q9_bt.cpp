// question : https://leetcode.com/problems/same-tree/

// my solution : 
class Solution {
public:
    vector<int> ans;
    void pot(TreeNode* root){
        if (root == NULL){
            ans.push_back(-1);
            return;
        }
        ans.push_back(root->val);
        pot(root->left);
        pot(root->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        pot(p);
        vector<int> p1 = ans;
        ans.clear();
        pot(q);
        vector<int> q1 = ans;
        for (int i=0; i<p1.size(); i++){
            if (p1[i] != q1[i]){
                return false;
            }
        }
        return true;
    }
};

