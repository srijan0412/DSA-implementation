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

// Function to print all the elements present in kth level of a binary tree 
// building 
vector<int> printKthLevel(Node* root, int k){
    vector<int> ans;
    queue<Node*> line;

    line.push(root);
    line.push(NULL);

    int level = 0;
    while (!line.empty()){
        Node* elem = line.top();
        line.pop();

        if (elem = NULL){
            line.push(NULL);
        }
    }
    return ans;
}

// Input : 2 7 5 -1 9 -1 1 -1 -1 11 4 -1 -1 -1 -1

int main(){
    Node* root = levelOrderBuild();
    vector <int> ans = printKthLevel(root, 2);
    for (auto c: ans) cout << c << " ";    
    return 0;
}