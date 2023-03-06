#include <bits/stdc++.h>
using namespace std;

// Linked-list 
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

void display(node* head){
    node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp =  temp->next; 
    }
    cout << endl;
}

// Reversing a linked list :
// from :
// 1 -> 2 -> 3 -> 4 -> 5
// to :
// 5 -> 4 -> 3 -> 2 -> 1

// there are 2 ways to reverse a linked list :
// 1. Iterative Method 
// 2. Recursive Method
// Both the methods are taking O(n) Time Complexity

// Iterative method :
node* reverse1(node* &head){

    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while (currptr != NULL){
        nextptr = currptr->next; // address of 2 is saved here in next ptr
        currptr->next = prevptr;  //  NULL <- 1 2->3->4->5
        prevptr = currptr; //Incrementing ptrs previour -> current 
        currptr = nextptr; //Incrementing ptrs current -> next
    }

    return prevptr;
}

// Recursive Case  
node* reverse2 (node* &head){
    // Base Case 
    if (head == NULL or head->next == NULL){
        return head;
    }
    // Recursive Case:
    node* newhead = reverse2(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}


int main(){
    node* arr = new node(1);
    ins(arr,2);
    ins(arr,3);
    ins(arr,4);
    ins(arr,5);
    display(arr);
    // node* newhead = reverse1(arr);
    // display(newhead);
    node* newhead2 = reverse2(arr);
    display(newhead2);
    return 0;
}