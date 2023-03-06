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

void display(node* head){
    node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp =  temp->next; 
    }
    cout << endl;
}

// Reversing K-Nodes :
node* reversek (node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count = 0;
    while (currptr != NULL and count < k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL){
        head->next = reversek(nextptr,k);
    }

    return prevptr;
}

int main(){
    node* arr = new node(1);
    ins(arr,2);
    ins(arr,3);
    ins(arr,4);
    ins(arr,5);
    ins(arr,6);
    display(arr);
    int k = 2;
    node* newhead = reversek(arr, k);
    display(newhead);
    return 0;
}