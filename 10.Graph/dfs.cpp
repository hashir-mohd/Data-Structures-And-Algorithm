#include <iostream>
using namespace std;
#include <vector>
#include <queue>

int dfs(vector <int> adj, int v){
    bool visited[v];
    int count =0;
    for(int i =0;i < v;i++){
        visited[i]=false;
    }
    for(int i =0; i<v;i++){
        if(visited[i]== false){
            count++;
            dfsRec(adj,i,visited);
        }
    }
    cout << "number of island are :" << count;
    return count;
}

void dfsRec(vector <int> adj,int s, bool visited[]){
    visited[s]= true;
    cout << s << " ";
    for ( int u :adj[s]){
        if(visited[u]==false){
            dfsRec(adj,u,visited);
        }
    }
}