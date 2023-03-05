#include <iostream>
using namespace std;

class node {
    public :
    int data;
    node* next;
    
    node(int val){
        data=val;
        next = NULL;
    }
};

void insertnew(node* &head, int val){
    node* n = new node(val);

    if (head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* &head){
    node* temp = head;
    while (temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<endl;
}

void insertattail(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool src(node* head, int key){
    node* temp = head;
    while (temp != NULL){
        if (temp->data == key){
            return true;
        }
        temp = temp->next;
    }    
    return false;
}

int main(){
    node* arr = NULL;
    insertnew(arr, 20);
    insertnew(arr, 30);
    insertnew(arr, 40);
    insertnew(arr, 50);
    display(arr);
  
    // insertattail(arr, 60);
    // display(arr);

    // if (src(arr, 10)){
    //     cout << "10 is a part of the array";
    // }
    // else {
    //     cout << "10 not found " << endl;
    // }
    return 0;
}