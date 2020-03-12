//============================================================================
// Name        : selection_sort.cpp
// Author      : aNIRUDDHA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main() {
	int arr[5]={4,3,5,5,1};
	int i;
	int j;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
				swap(arr[i],arr[j]);
		}
	}
	cout<<"Array after sorting "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<'\t';
	}





}
