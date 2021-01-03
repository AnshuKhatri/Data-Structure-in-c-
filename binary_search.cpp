/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int find(int intArray[], int data)
{
    int low_bound=0;
    int upp_bound=6; //size of array-1
    int midpoint=-1;
    int comparison=0;
    int index=-1;
    while(low_bound<=upp_bound)
    {
        cout<<"comparison: "<<comparison+1<<endl;
        cout<<"lower bound:"<<low_bound<<";"<<"upper bound"<<upp_bound<<endl;
        comparison++;
        //find middle midpoint
        midpoint=low_bound+(upp_bound-low_bound)/2;
        
        //data found
        
        if(intArray[midpoint]==data)
        {
            index=midpoint;
            break;
        }
        else{
            if(intArray[midpoint]<data)
            {
                low_bound=midpoint+1;
            }
            else
            {
                upp_bound=midpoint-1;
            }
        }
    }
    
    cout<<"total comparison made: "<<comparison<<endl;
    return index;
}

int main()
{
    int intArray[7]={2,12,23,27,100,102,119};
    
    int location=find(intArray,102);
    
    if(location!=-1)
    cout<<"element found at location: "<<location+1;
    else
    cout<<"element not found";
    return 0;
}
