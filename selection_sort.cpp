/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void selection_sort(int arr[], int n)
{
    int i,j;
    int min_ind;
    int temp;
    for(i=0;i<4;i++)  // i< size of array -1         0,1,2,3,4     5
    {
        min_ind=i;
        for(j=i+1;j<5;j++)
        {
            if(arr[j]<arr[min_ind])
            min_ind=j;
            
            
        }
        temp=arr[i];
        arr[i]=arr[min_ind];
        arr[min_ind]=temp;
    }
    
    
}

int main()
{
    // array 
    
    
    int arr[]={9,10,100,20,29};
    int n=5;
    //call selection_sort function
    selection_sort(arr,5);
    
    cout<<"the sorted array: "<< endl;
    //print the sorted array
    for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;

    return 0;
}
