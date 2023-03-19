#include <bits/stdc++.h>
using namespace std;

// Node structure for binary tree
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

// Building tree from preorder traversal
Node* buildTree(){
    int d; cin >> d;

    if (d == -1){
        return NULL;
    }
    
    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

// Level order build 
Node* levelOrderBuild(){
    int d;
    cin >> d;
    
    Node* root = new Node(d);

    queue<Node*> q;
    q.push(root);

    while (!q.empty()){
        Node* current = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;

        if (c1 != -1){
            current -> left = new Node(c1);
            q.push(current->left);
        }
        if (c2 != -1){
            current -> right = new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}

//sum of Nodes
int sumBT(Node* root){
    // Base Case 
    if (root == NULL){
        return 0;
    }
    
    // Recursive Case 
    int sum = root->data; 
    sum += sumBT(root->left) + sumBT(root->right);
    return sum;
}

// Input : 2 7 5 -1 9 -1 1 -1 -1 11 4 -1 -1 -1 -1

int main(){
    Node* root = levelOrderBuild();
    int sum = sumBT(root);
    cout << sum << endl;
    return 0;
}