// program to find the minimum height of the binary tree
// https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/quiz/5293160#overview

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

int minDepth(Node *root) {
    // base-case
    if (root==NULL){
        return 0;
    }
    
    // recursive case
    int lh = minDepth(root->left);
    int rh = minDepth(root->right);
    return min(lh,rh)+1;
}