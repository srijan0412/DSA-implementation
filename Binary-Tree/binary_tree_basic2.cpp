// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Input : 1 2 4 -1 -1 5 7 -1 -1 3 -1 6 -1 -1

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
node* buildtree(){
    int d;
    cin >> d;

    if (d == -1){
        return NULL;
    }
    
    Node* n = new Node(d);
    n->left = buildtree();
    n->right = buildtree();
    return n;
}

int main(){
    Node* root = buildtree();
    return 0;
}