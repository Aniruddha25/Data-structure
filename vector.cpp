//============================================================================
// Name        : vector.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <int> g;
	vector <int> h;
	h.push_back(3);
	h.push_back(4);
	h.push_back(5);

	for(int i=0;i<5;i++)
		g.push_back(i*2+1);


	for(int i= 0;i!=g.size();i++)
	{

	      cout<< g[i]<<'\t';

	}
	cout<<endl;
	cout<<g.capacity();//Max capacity of array
	g.push_back(7);//to insert element at the end of array
	cout<<endl;

	for(int i= 0;i!=g.size();i++)
	{

	      cout<< g[i]<<'\t';

	}
	cout<<endl;
	cout<<g.at(3);// to get element at particular position
	cout<<endl;
	cout<<"First element :"<<g.front()<<endl;//First element of array
	cout<<"Last element :"<<g.back()<<endl;//Last element of array
	g.assign(3,9);//Assigns 3 times value=9 inside vector overwriting the
	              //Previous array elements
	for(int i= 0;i!=g.size();i++)
		{

		      cout<< g[i]<<'\t';

		}
	cout<<endl;
	g.pop_back();// To remove last element from array
	for(int i= 0;i!=g.size();i++)
		{

		      cout<< g[i]<<'\t';

		}

	g.insert(g.begin(),7);//Inserting 7 at first position in array
	g.erase(g.begin());//Removing First element from array
	g.swap(h);//for swapping two arrays /vectors
	cout<<endl;
	cout<<"Array after swapping"<<endl;
	for(int i= 0;i!=g.size();i++)
			{

			      cout<< g[i]<<'\t';

			}
	cout<<endl;
	for(int i= 0;i!=h.size();i++)
			{

			      cout<< h[i]<<'\t';

			}


    g.resize(5);//for changing array size
    g.empty(); //to check array is empty or not
	g.clear();//for removing all element from array
	cout<<endl;
	vector <int> f;
	f.push_back(8);
	f.push_back(7);
	f.push_back(5);
	f.push_back(9);

	sort(f.begin(),f.end());//sorting using algorithm library
	for(int i=0;i<f.size();i++){
		cout<<f[i]<<'\t';
	}
	cout<<endl;
	reverse(f.begin(),f.end());//for reversing the array/vector
	for(int i=0;i<f.size();i++){
			cout<<f[i]<<'\t';

		}
	cout<<endl;
	//To count frequency of array element
	cout<<"Count of 7 :" <<count(f.begin(),f.end(),7);
	cout<<endl;
	//find() to check element present in array or not
   if(find(f.begin(),f.end(),5)!=f.end())
   {
	   cout<<"Element is found "<<endl;
   }
   f.erase(f.begin()+1);//for deleting specified position
   for(int i=0;i<f.size();i++){
   			cout<<f[i]<<'\t';

   		}
   //Distance between two vector elements in terms of index
   cout<<distance(f.begin(),f.end());
















}
