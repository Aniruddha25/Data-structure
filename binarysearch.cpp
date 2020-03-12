//============================================================================
// Name        : binarysearch.cpp
// Author      : aNIRUDDHA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : cpp.cpp
// Author      : aNIRUDDHA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;
int binarysearch(int arr[],int key)
{
	int s=0;
	int f=6;

	while(s<=f)
	{

	int m=(s+f)/2;
	  if(key==arr[m])
		 return m;
	  if(key<arr[m])
		  f=m-1;
	  if (key>arr[m])
		  s=m+1;


	}
	return -1;






}
int recursive_binary(int arr[],int s,int f,int key){
	if(s>f)
		return -1;

	int  m = (s+f)/2;
	if(key==arr[m])
		return m;

	if(key>arr[m])
		return recursive_binary(arr,m+1,f,key);
	if(key<arr[m])
		return recursive_binary(arr,s,m-1,key);




}



int main() {
	int arr[7]={3,4,5,6,10,11,13};

	int key;
	cout<<"Enter the key"<<endl;
	cin>>key;
	int index=binarysearch(arr,key);
	if(index!=-1)
		cout<<index<<"th index have key value"<<arr[index]<<endl;
	else
		cout<<"Key does not found"<<endl;
	int p;
	p=recursive_binary(arr,0,6,13);
	cout<<arr[p]<<endl;




















}
