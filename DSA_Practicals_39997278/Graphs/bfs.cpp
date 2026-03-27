#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int V=6;
vector<int> adj[V];

void addEdge(int u,int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(int start){
    vector <bool> visited(V,false);// track visited nodes
    queue<int>q;
    visited[start]=true;//mark start as visited 
    q.push(start);//enqueue start node

    while(!q.empty()){
        int node=q.front();q.pop();//dequeue
        cout<<node<< " ";
        for(int x:adj[node])//check all neighbours
        if(!visited[x]) {
            visited[x]=true;// mark before enqueuing
            q.push(x);
        }

    }
}

int main(){
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,3);
    addEdge(2,4);
    addEdge(3,5);

    cout<< "BFS: "; BFS(0);
    return 0;

}