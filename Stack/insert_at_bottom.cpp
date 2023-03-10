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

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertatbottom(st, 5);
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}