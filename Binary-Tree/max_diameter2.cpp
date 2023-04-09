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

// Helper Function is used to calculate the height of the tree
int height(Node* root){
    // base case 
    if (root == NULL){
        return 0;
    }

    // recursive case 
    int l = height(root->left);
    int r = height(root->right);
    return 1 + max(l,r);
}

// This function prints the maximum diameter of a tree 
// maximum - diameter : longest distance between two nodes
// This function is an optimized solution for the max-diameter problem
// The time complexity of this code is O(n)
// The idea here is : 
// Instead of using height function to calculate the height of the left subtree and the right subtree 
// You can return 2 values from the function (height and max-d)
// (return type will be pair)
class HDPair { //height-diameter pair
public :
    int height;
    int diameter;
};

HDPair optDiameter(Node* root){
    HDPair p;
    if (root==NULL){
        p.height = p.diameter = 0;
        return p;
    }

    // Otherwise
    HDPair Left = optDiameter(root->left);
    HDPair Right = optDiameter(root->right);

    p.height=max(Left.height, Right.height)+1;

    int D1 = Left.height + Right.height;
    int D2 = Left.diameter;
    int D3 = Right.diameter;

    p.diameter = max(D1,max(D2,D3));
    return p;
}

// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

int main(){
    Node* root = buildTree();
    HDPair ans = optDiameter(root);
    cout << ans.diameter << endl;
    return 0;
}
