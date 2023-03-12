#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

// Note class for the binary tree 
class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

// Building Tree through preorder traversal ( Node -> left -> right )
// this is a recursive function :
Node* buildTree(){
    int d; cin >> d;

    if (d == -1){
        return NULL;
    }
    
    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    cout << "running_buildtree" << endl;
    return n;
}

// prints all the nodes in Preorder traversal form 
void printPreorder(Node* root){
    if (root = NULL){
        return;
    }
    // cout << "running_printpreorder" << endl;

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}
// Notrunning  

int main(){
    Node* root = buildTree();
    printPreorder(root);
    return 0;
}