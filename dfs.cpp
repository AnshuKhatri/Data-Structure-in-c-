/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    void dfs_demo();
    void dfs(int root,bool visited[]);
    
    
};

void mygraph::dfs_demo()
{
    
    bool visit[v];
    for(int i=0;i<v;i++)
    visit[i]=false;
    
    
    for(int i=0;i<v;i++)
    if(visit[i]==false)
     dfs(i,visit);
    
}

void mygraph::dfs(int root, bool visited[])
{
    visited[root]=true;
    cout<<root<<" ";
    list<int>::iterator it;
    
    for(it=adj[root].begin();it!=adj[root].end();it++)
    {
        if(!visited[*it])
        {
            dfs(*it,visited);
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
    g.dfs_demo();
    return 0;
}
