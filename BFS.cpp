#include <iostream>
#include<map>
#include <bits/stdc++.h>

using namespace std;
class mygraph
{
    int v;
    list<int> *adj;
    public:
    mygraph(int x){v=x;
           adj=new list<int>[x];
    }
    void addEdge(int a,int b);
    void bfs_demo(int root);
    
};

void mygraph::bfs_demo(int root)
{
    bool visited[v];
    for(int i=0;i<v;i++)
    visited[i]=false;
    
    
    std::list<int> q;
    q.push_back(root);
    visited[root]=true;
    list<int>::iterator it;
    
    while(!q.empty())
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop_front();
        
        for(it=adj[x].begin();it!=adj[x].end();it++)
        {
            if(!visited[*it])
            q.push_back(*it);
            visited[*it]=true;
            
        }
        
    }
    
    
    
    
    
}

void mygraph::addEdge(int a, int b)
{
    adj[a].push_back(b);
    
}


int main()
{
    mygraph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
    
    cout<<"BFS for vertex starting at 2:"<<endl;
   g.bfs_demo(2);  
    return 0;
}
