#include <iostream>
using namespace std;

// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

// Preorder output: 1 2 4 5 7 3 6
// Inorder Output: 4 2 7 5 1 3 6
// Postorder output: 4 7 5 2 6 3 1


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
    return n;
}


// prints all the nodes in Preorder traversal form ( Node -> left -> right )
void printPreorder(Node* root){
    if (root == NULL){
        return;
    }

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

// prints all the nodes in Inorder traversal form (rootnode -> leftsubtree -> rightsubtree)
void printInorder(Node* root){
    if (root == NULL){
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
// prints all the nodes in postorder traversal form (leftSubtree -> rightsubtree -> rootnode)
void printPostorder(Node* root){
    if (root == NULL){
        return;
    }

    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

int main(){
    Node* root = buildTree();
    printPreorder(root);
    cout << endl;
    printInorder(root);
    cout << endl;
    printPostorder(root);
    return 0;
}