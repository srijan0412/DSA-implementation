#include <bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int> &st, int val){
    // base case 
    if (st.empty()){
        st.push(val);
        return;
    }

    // recursive case 
    int temp = st.top();
    st.pop();
    insertatbottom(st,val);
    st.push(temp);
}

// In this module we will learn to reverse a stack with the help of recursion 

void reverse_m(stack<int> &st){
    // base - case 
    if (st.empty()){
        return;
    }

    // recursive - case 
    int t = st.top();
    st.pop();
    reverse_m(st);
    insertatbottom(st,t);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverse_m(st);

    while (!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}