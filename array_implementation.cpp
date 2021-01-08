

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    //shopping- price of 4 items
    int item_price[4];
    int i;
    //insertion
    cout<<"inserting the price of the items"<< endl;
    for(i=0;i<4;i++)
    cin>>item_price[i];
    
    //traversal
    cout<<"the entered price of the 4 items: "<<endl;
    for(i=0;i<4;i++)
    cout<<"the price of item at"<<i+1<<": "<<item_price[i]<<endl;
    
    //search-if an item has price 22
    int j=0;
    while(j<4)
    {
        if(item_price[j]==22)
        {
            
            break;
        }
        j++;
    }
    if(j==4)
        {
            cout<<"the item having price 22 is not found "<<endl;
        }
        else
        cout<<"the item having price 22 is found at position: "<<j+1<<endl;
        
    
    //update price of item 4 to 100; 0,1,2,3.
    item_price[3]=100;
    cout<<"the updated price of 4th item is: "<< item_price[3]<<endl;
    
    
    //delete price of item 3: index=2 represents element 3
    for(i=2;i<4;i++)
    item_price[i]=item_price[i+1];
    //size: 4 current size 3
    
    cout<<"the array post deletion"<<endl;
    //print the array post deletion
    for(i=0;i<3;i++)
    cout<<"the price of item at"<<i+1<<": "<<item_price[i]<<endl;
    
    
    return 0;
}
