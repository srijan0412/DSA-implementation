#include <iostream>
#define N 10000
using namespace std;

// This is queue implementation with the help of array 

class queue {
    int* arr;
    int front;
    int back;

    public: 
    queue(){
        arr = new int[N];
        front = back = -1;
    }
    void push(int num){
        if (back == N-1){
            cout << "queue is full" << endl;
        }

        back++;
        arr[back] = num;

        if (front == -1){
            front++;
        }
    }
    void pop(){
        if ((front == -1) or (front > back)){
            cout << "Queue is Empty" << endl;
        }
        front++;
    }
    int peek(){
        if ((front == -1) or (front > back)){
            cout << "Queue is Empty" << endl;
        }
        return arr[front];
    }
    bool empty(){
        if (front == -1 or (front>back)){
            return true;
        }
        return false;
    }
};

int main(){
    queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.push(60);

    while (!qu.empty()){
        cout << qu.peek() << " ";
        qu.pop();
    }
    return 0;
}