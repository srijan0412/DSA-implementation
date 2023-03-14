#include <bits/stdc++.h>
using namespace std;

// input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 

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

void PrintLevelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        Node* temp = q.front();
        if (temp == NULL){
            cout << endl;
            q.pop();

            // Pushing null if one level is finished
            if (!q.empty()){
                q.push(NULL);
            }

        }
        else {
            q.pop();
            cout << temp->data << " ";
            if (temp->left){
                q.push(temp->left);
            }
            if (temp->right){
                q.push(temp->right);
            }
        }
    }
    return;
}

int main(){
    Node* root = buildTree();
    PrintLevelOrder(root);
    return 0;
}