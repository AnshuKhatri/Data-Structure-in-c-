/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
 
    int i,j;
    int key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 &&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=key;
        
    }
    
}

int main()
{
    int arr[5]={10,9,100,26,30};
    
    // calling insertion sort function
    
    insertion_sort(arr,5);
    cout<<"the sorted array is";
    //print the sorted array
    for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;
    
    return 0;
}
