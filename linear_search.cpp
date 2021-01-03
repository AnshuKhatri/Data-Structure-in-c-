/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // array having 5 items
    int arr[5];
    int i;
    int pos=-1;
    cout<<"enter the 5 values:"<< endl;
    for(i=0;i<5;i++)
    cin>>arr[i];

    // linear search for the value 23
    int j=0;
    while(j<5)
    {
        if(arr[j]==23)
        {
            pos=j+1; 
            break;
        }
        j++;
    }
    
    cout<<"the value 23 is found at position: "<<pos<<endl;
   
    return 0;
}
