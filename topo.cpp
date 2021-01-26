/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include<stack>
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
    void topo_demo();
    void topo(int root, bool visited[], stack<int> &st);
    
    
};

void mygraph::addEdge(int a, int b)
{
    adj[a].push_back(b);
    
}

void mygraph::topo_demo()
{
    std::stack<int> s;
    bool visit[v];
    for(int i=0;i<v;i++)
    visit[i]=false;
    
    for(int i=0;i<v;i++)
    if(!visit[i])
      topo(i,visit,s);
      
      while(s.empty()==false)
      {
          cout<<s.top()<<"  ";
          s.pop();
      }
    
}

void mygraph::topo(int root, bool visited[],stack<int> &st)
{
    visited[root]=true;
    list<int>::iterator it;
    for(it=adj[root].begin();it!=adj[root].end();it++)
    {
        if(!visited[*it])
        {
            topo(*it,visited,st);
        }
        
    }
    st.push(root);     //vertix 3 ... 2....1...0
    
    
}

int main()
{
    mygraph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
  cout<<"topological sort: "<<endl;
  g.topo_demo();
  
    return 0;
}
