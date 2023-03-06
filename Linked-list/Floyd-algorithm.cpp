#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// Linked list node template
class node{
    public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void ins(node *head, int val){
    node *n = new node(val);

    if (head == NULL){
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head){
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// Detection and Removal of Cycle from a linked list
// Floyd's cycle-finding algorithm is a pointer algorithm that uses only two pointers, 
// which move through the sequence at different speeds.
// It is also know as Hare and Tortoise algorithm 

// Function to create cycle in a linked list 
void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;
    
    int count = 1;
    while (temp->next != NULL){
        if (count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

// This function detects the loops in the linked list 
bool detectCycle(node* head){
    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if (slow==fast){
            return true;
        }
    }
    return false;
}

// This function will break the cycle formed in the linked list 
void removeCycle( node* &head){
    node* slow = slow->next;
    node* fast = fast->next->next;
    
    do {
        slow = slow->next;
        fast = fast->next->next;
    }while (slow != fast);

    fast = head;
    while (slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}


int main(){
    node* arr = new node(1);
    ins(arr,2);
    ins(arr,3);
    ins(arr,4);
    ins(arr,5);
    ins(arr,6);
    makeCycle(arr,3);
    // cout << detectCycle(arr) << endl;
    removeCycle(arr);
    cout << detectCycle(arr) << endl;
    display(arr);
    return 0;
}