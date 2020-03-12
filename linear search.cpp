//============================================================================
// Name        : linear.cpp
// Author      : aNIRUDDHA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int recur_linear(int arr[],int i,int key)
{
	if(arr[i]!=key)
		return recur_linear(arr,i+1,key);

	return i+1;



}


int main() {
	int arr[5]={3,6,7,8,4};
	int key;
	cout<<"Enter the key "<<endl;
	cin>>key;
	int i;
	for(i=0;i<5;i++)
	{
		if(key==arr[i])
		{
			cout<<"Element found"<<endl;
			break;
		}


     }
	cout<< recur_linear(arr,0,7)<<"th element has got value  = key"<<endl;
}

