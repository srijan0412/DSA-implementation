#include <bits/stdc++.h>
using namespace std;

// input : 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1 

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

// helper function -> Height()
// it returns the height of the tree 
int height(Node* root){
    if (root == NULL){
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    return 1 + max(l,r);
}

int main(){
    Node* root = levelOrderBuild();
    PrintLevelOrder(root);
    cout << endl;
    cout << height(root) << endl;;
    return 0;
}