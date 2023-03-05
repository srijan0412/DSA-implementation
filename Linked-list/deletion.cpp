#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void ins(node* head, int val){
    node* n = new node(val);

    if (head == NULL){
        head = n;
        return ;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = n;
}

// deletion of nth node 
// 1 -> 2 -> 3 -> 4
// suppose we have to delete 3 so we have to change the address of 2 such that it start pointing 2
// so for deleting nth element we have to change the address field of (n-1)th element and point it to (n+1)th node  

// My Method
void del(node* head, int n){
    node* temp = head;
    node* prev;
    for (int i=0; i<n; i++){
        prev = temp;
        temp = temp->next;
    }
    // cout << temp->data << endl;
    node* todelete = temp;
    prev->next = temp->next;

    delete todelete;
}   //working fine

//second method (deletion by value)

void del2(node* head, int val){
    node* temp = head;
    while (temp->next->data!=val){
        temp = temp -> next;
    }
    node* todelete = temp -> next;
    temp->next = temp->next->next;
    delete todelete;
}   //working fine

// deleting element from the start of the linked list 
void delathead(node* &head){
    node* temp = head;
    head = head->next;
    delete temp;
}


void display(node* head){
    node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp =  temp->next; 
    }
    cout << endl;
}

int main(){
    node* arr = new node(1);
    ins(arr,2);
    ins(arr,3);
    ins(arr,4);
    ins(arr,5);
    display(arr);
    // del(arr,2);
    // del2(arr,3);
    delathead(arr);
    display(arr);

    return 0;
}