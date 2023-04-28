// Program to show whether the binary tree is symmetic of not 
// https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/quiz/5293156#overview

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};
//global vector ans
vector<int> ans;
void inorder(Node* root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    ans.push_back(root->key);
    inorder(root->right);
}

bool isSymmetric(Node* root) {
    inorder(root);
    int low = 0;
    int high = ans.size()-1;
    while (low<=high){
        if (ans[low]!=ans[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}