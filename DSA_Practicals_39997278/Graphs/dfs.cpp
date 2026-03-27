#include <iostream>
#include <vector>
using namespace std;

const int V=6;
vector<int>adj[V];

void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

}
void DFS(int node,vector<bool>& visited) {
    visited[node]=true; //mark current node as visited
    cout<< node<< " ";
    for(int x:adj[node]) // explore each neighbour
    if(!visited[x])//only recurse on unvisited
    DFS(x,visited);

}
int main(){
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,3);
    addEdge(2,4);
    addEdge(3,5);

    vector<bool> viisted(V,false); //initialize all as unvisited
    cout<< "DFS: "; DFS(0,viisted);
    return 0;
}