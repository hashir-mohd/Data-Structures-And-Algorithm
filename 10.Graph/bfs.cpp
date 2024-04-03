#include <iostream>
using namespace std;
#include <vector>
#include <queue>

int bfsDis(vector <int> adj, int v){
    bool visited[v+1];
    int count =0;
    for(int i =0;i < v;i++){
        visited[i]=false;
    }
    for(int i =0; i<v;i++){
        if(visited[i]== false){
            count++;
            bfs(adj,i,visited);
        }
    }
    cout << "number of island are :" << count;
    return count;
}

void bfs(vector <int> adj,int v, bool visited[]){
    queue <int> q;
    visited[v]= true;
    q.push(v);
    while(!q.empty()){
        int u= q.front();
        q.pop();
        cout << q << " ";
        for(int v :adj[u]){
            if(visited==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}