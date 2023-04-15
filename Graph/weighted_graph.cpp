#include <bits/stdc++.h>
using namespace std;

// The first way is very simple as we have seen in the previous file :
// what we have to do is simple:
// we are creating an adjacency matrix 
// where instead of storing one{ 1 } for each edge we will be storing there weight in that particular matrix
// this quiet a simple approach but the spacecomplexity of this approach is high (N*N)
// example : adj[v][u] = weight; 


// So the second way is little bit complex... (Not as complex as your Life :P)
// so what we are doing here is, Instead of storing the edge alone, we will store a pair of edge and weight 
// let me explain you with an example: 
// 0 -> {}
// 1 -> { {2, 3}, {4, 2} }    so here if we see first element of the list we have {2, 3} so 2 is an node and  
//                            3 is the weight of the edge connecting 1 to node 2 (seems interesting ryt?) 
// 2 -> { {3, 6} }
// 3 ... (and so on.. (i m lazy AF...))


int main(){
    
    return 0;
}