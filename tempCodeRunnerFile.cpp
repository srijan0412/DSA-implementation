#include <bits/stdc++.h>
using namespace std;

int tsc=1;

void solution(){
    int arr[26];
    for (int i=0; i<26; i++){
        cin >> arr[26];
    }
    int nt; cin >> nt;
    unordered_map<string, int> tc;
    while (nt--){
        string ans="" ;
        string s; cin >> s;
        int n = s.length();
        for (int i=0; i<n; i++){
            ans += to_string(s[i]-65);
        }
        tc[ans]++;
    }
    
    string ans = "NO";
    for (auto c: tc){
        if (c.second>1){
            ans="YES";
        }
    }
    
    cout << "Case #" << tsc << ": " << ans << endl;
    tsc++;
}

int main(){
    int t; cin >> t;
    while ( t-- ){
        solution();
    }
    return 0;
}