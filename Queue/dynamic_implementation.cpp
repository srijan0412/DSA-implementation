// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Node structure for linked list 
class node {
    public:
    int data;
    node* next;

    node(int d){
        data = d; 
        next = NULL;
    }
};

// Implementation of queue with the help of linked list 
class queue {
    public:
    node* back;
    node* front;

    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* temp = new node(x);

        if (front == NULL){
            front = back = temp;
            return;
        }

        back->next = temp;
        back = back->next;
    }

    void pop(){
        if (front == NULL){
            cout << "No element to pop" << endl;
            return;
        }
        node* temp = front;
        front = front->next;
        delete temp;
    }

    int peek(){
        if (front == NULL){
            cout << "No element to pop" << endl;
            return -1;
        }
        
        return front->data;
    }
    
    bool empty(){
        if (front == NULL){
            return true;
        }
        return false;
    }
};

int main(){
    queue arr;
    arr.push(1);
    arr.push(2);
    arr.push(3);
    while (!arr.empty()){
        cout << arr.peek() << endl;
        arr.pop();
    }
    return 0;
}