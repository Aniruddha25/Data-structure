//============================================================================
// Name        : bubble_sort.cpp
// Author      : ANIRUDDHA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void swap(int &a ,int & b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

}
void sort_bubble(int arr[])
{
	int i;
	int j;
	for(i=0;i<6;i++)
		{
			for(j=0;j<5-i;j++)//n-i-1
			{
				if(arr[j]>arr[j+1])
					swap(arr[j],arr[j+1]);
			}
		}


}
void print_array(int arr[])
{
	int i;
	for(i=0;i<6;i++)
	{
		cout<<arr[i]<<'\t';
	}
}


int main() {
	int arr[6]={3,5,2,1,4,7};
	int i;
	int j;
	/*for(i=0;i<6;i++)
	{
		for(j=0;j<5-i;j++)//n-i-1
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}*/
	cout<<"Array after sorting "<<endl;
	sort_bubble(arr);
	print_array(arr);





}
