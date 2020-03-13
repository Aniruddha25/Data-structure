//============================================================================
// Name        : insert_sort2.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//============================================================================
// Name        : insertion_sort.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void insert_sort(int arr[])
{
	for(int i=1;i<7;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && key<=arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main() {
	int arr[7]={1,2,5,3,4,8,6};
	insert_sort(arr);
	int i;
	for(i=0;i<7;i++)
	{
		cout<<arr[i]<<'\t';

	}

}
