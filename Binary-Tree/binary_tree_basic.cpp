#include <bits/stdc++.h>
using namespace std;

// Tree is Herarical non-primitive data structure

struct node {
    int data;
    node* left;
    node* right;
    
    Node(int val){
        data = val;
        left = right = NULL;
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    //     1
    //    / \
    //   2   3
    return 0;
}