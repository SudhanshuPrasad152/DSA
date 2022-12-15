#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction){
        // direction - 0  Undirected Graph
        // direction - 1 Directed Graph
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printList(){
        for(auto i: adj){
            cout<<i.first<<" -> ";
            for(auto j: i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;

    int m;
    cout<<"Enter number of edges"<<endl;
    cin>>m;

    graph g;
    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        g.addEdge(u, v, 0);
    }

    //print list;
    g.printList();
}