/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#include<map>
#include <bits/stdc++.h>

//class define : mygraph

class mygraph
{
    int v;
    list<int> *adj;
    
    public:
    mygraph(int x) //parameterised constructor
    {
        v=x;
        adj=new list<int>[x];
    }
    void addEdge(int a, int b);
    
    
};

//define the addEdge function

void mygraph::addEdge(int a,int b)
{
    adj[a].push_back(b);
    
    
}


int main()
{
    mygraph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    



    return 0;
}
