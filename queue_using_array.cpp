
#include <bits/stdc++.h> 
using namespace std; 

class myqueue
{
    int front,rear,size;
    public:
    int arr[10];
    myqueue()
    {
        front=-1;
        rear=-1;
    }
    bool enq(int data);
    int deq();
    void display();
};

bool myqueue::enq(int data)
{
    if(rear<9)
    {   
        if(front==-1)
        front=0;
        rear++;
        arr[rear]=data;
        return true;
    }
    else
    {
        cout<<"overflow";
        return false;
    }
}

int myqueue::deq()
{
    int temp;
    if(front==-1||front>rear)
    {
        cout<<"underflow";
        return 0;
    }
    else
    {
        temp=arr[front];
        front++;
        return temp;
    }
    
}

void myqueue::display()
{
 for(int i=front;i<=rear;i++)
  {
      cout<< arr[i] <<"  ";
  }
    
}

int main () 
{ 
	myqueue myq;
	myq.enq(10);
	myq.enq(20);
	myq.enq(30);
	
	myq.display();
	
	int x=myq.deq();
	cout<<"deque the element ;"<<x<<endl;
	
	myq.display();
	

	return 0; 
} 
