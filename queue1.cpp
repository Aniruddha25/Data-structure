//============================================================================
// Name        : queue1.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define size 10
using namespace std;
class queue{
private:
	int rear;
	int front;
public:
	int arr[size];
	queue()//setting values of rear and front
	{
		rear=-1;
		front=-1;
	}
	int enqueue(int x)
	{
		if(rear==size-1)
			 cout<<"Queue is full"<<endl;
		else
		{
		rear++;
		arr[rear]=x;
		cout<<x<<"is added to queue"<<endl;
		}


	}
	int dequeue()
	{
		if(front==rear)
			cout<<"queue is empty"<<endl;
		else{
			front++;

		}
	}
	int top()
	{
		if(front==rear)
			  cout<<"queue is empty"<<endl;
		else{

			return arr[front+1];

		}

	}
};

int main() {
	queue q1;
	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);
	q1.enqueue(40);
	q1.dequeue();
	q1.dequeue();

	int i =q1.top();
	cout<<i<<endl;



}
