#include <bits/stdc++.h>
using namespace std;

// This is a basic tutorical to store a graph data-structure
// A graph data structure can be stored into two ways :
// 1. Adjancy Matrix (way1)
// 2. Adjacency List (vector in c++)

void build_graph() {
    // This is a Expensive way to store a graph it has space complexity of O[n*m]
    // and the time complexity to store the graph is O[n] 
    int n, m;
    cin >> n >> m;
    // we are saving the connecting froma a 2D Matrix 
    // Graph here
    int adj[n+1][m+1];
    for (int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[u][v] = 1;
    }
    //   0 1 2 3 4 5 
    // ------------------
    //0 | 0 0 0 0 0 0  
    //1 | 0 0 1 0 0 1      Supposing that 1 and 2 has a connection in between
    //2 | 0 1 0 1 0 0      Supposing that 2 and 3 has a connection in between
    //3 | 0 0 1 0 1 0      Supposing that 3 and 4 has a connection in between
    //4 | 0 0 0 1 0 1      Supposing that 4 and 5 has a connection in between
    //5 | 0 1 0 0 1 0      Supposing that 5 and 1 has a connection in between
}

void build_graph2(){

}

int main(){
    
    
    return 0;
}