// #include "Stack.h"
#include "Stack_v.h"
#include <iostream>
using namespace std;

int main(){
    Stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();

    // cout << st.empty() << endl;
    return 0;
}