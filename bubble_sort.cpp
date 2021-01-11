/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{
    int i,j;
    int temp;
    bool swap;
    
    for(i=0;i<n-1;i++)
    {
        swap=false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])    // size of array is 5;    i< 4 : 0,1,2,3    
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
                
            }
            
        }
        if(swap==false)
        break;
        
    }
    
    
}


int main()
{
   int arr[]={10,9,100,35,29};    //size= 5
   
   //calling the function to sort the array using bubble_sort
   bubble_sort(arr,5);
   
   cout<<"the sorted array:"<<endl;
   //print the sorted array
   
   for(int i=0;i<5;i++)
   cout<<arr[i]<<endl;
   
   

    return 0;
}
