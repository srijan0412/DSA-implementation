#include <bits/stdc++.h>
#include <stack>
using namespace std;

string reverse1(string s){
    stack<string> st;
    for (int i=0; i<s.size(); i++){
        string word = " ";
        while (s[i] != ' ' and i<s.size()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    string ans = "";
    while(st.size()>0){
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main(){
    string s = "Hello my name is srijan soni";
    cout << reverse1(s) << endl;    
    return 0;
}