// Expession tree solving through binary tree
// https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/quiz/5293158#overview

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    string key;
    Node* left, *right;
};

int evalTree(Node* root){
    // base-case
    if (root==NULL){
        return 0;
    }
    string op = root->key;
    int lv = evalTree(root->left);
    int rv = evalTree(root->right);
    if (op == "+"){
        return lv+rv;
    }
    else if (op == "-"){
        return lv-rv;
    }
    else if (op == "*"){
        return lv*rv; 
    }
    else if (op == "/"){
        return lv/rv;
    }
    else {
        return stoi(op);
    }
    return 0;
}