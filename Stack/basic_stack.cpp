#include <iostream>
#define n 100
using namespace std;

class Stack {
    int *arr;
    int top;
    public:

    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if (top==n-1){
            cout << "Stack overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop(){
        if (top==-1){
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }
    // int pop(){
    //     if (top == -1){
    //         cout << "No element to pop" << endl;
    //         return;
    //     }
    //     int r = arr[top];
    //     top--;
    //     return r;
    // }

    int Top(){
        if (top == -1){
            cout << "No element in stack" << endl; 
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        if (top == -1){
            return true;
        }
        else {
            return false;
        }
    }
};


int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.empty() << endl;
    // cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;

    return 0;
}