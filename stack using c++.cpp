//============================================================================
// Name        : stack.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define size 10
using namespace std;
class stack{
	int top;
public:
	int arr[size];
	stack()
{
		top=-1;
}
int push(int x)
{
	if(top>=size-1)
	{
		cout<<"stack overflow"<<endl;
		return 0;
	}

	else
	{
		arr[++top]=x;
		cout<<x<<"Pushed inside stack"<<endl;
		return 1;

	}

}
int pop()
{
	if(top<0)
	{
		 cout<<"Stack underflow"<<endl;
		 return 0;
	}
	else
	{
		int x=arr[top--];
	    return x;
	}


}
int peek()
{
	if(top<0)
	{
			cout<<"Stack underflow"<<endl;
			return 0;
	}

	else
	{
		int x=arr[top];
		return x;
	}

}
bool isempty()
{
	return (top<0);
}


};

int main() {
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	int i=s.peek();
	cout<<i;



}
