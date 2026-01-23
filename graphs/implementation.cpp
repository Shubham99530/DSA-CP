#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class graph
{
    public:
        unordered_map<int,vector<int>>adj;

        void add_node(int u, int v, bool direction)
        {
            adj[u].push_back(v);

            if (direction == 0)
            {
                adj[v].push_back(u);
            }
        }

        void print_Adjlist()
        {
            for (auto i : adj)
            {
                cout<<i.first<<"->";
                for(auto j : i.second)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    graph g;
    int n,m;
    cout<<"Enter the number of nodes and edges in the graph (u,v): ";
    cin>>n;
    cin>>m;
    for (int i=0;i<m;i++)
    {
        int u,v;
        cin>> u >> v;
        g.add_node(u,v,0);
    }
    g.print_Adjlist();
    return 0;

}