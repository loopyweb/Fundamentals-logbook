#include <iostream>
#include <vector>
using namespace std;

const int V=5;// number of vertices
vector<int> adj[V];// adjacency list

void addEdge(int u, int v){
    adj[u].push_back(v);// add v to u's list
    adj[v].push_back(u);// add u to v's list
}

void print(){
    for (int i=0;i<V; i++){
        cout<<i<<"->";
        for (int x:adj[i])//print each neighbour
        cout<< x <<" ";
        cout<<"\n";

    }
}

int main(){
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,3);
    addEdge(2,4);
    print();
    return 0;
    
}