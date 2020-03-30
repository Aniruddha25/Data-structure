//============================================================================
// Name        : vector.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
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

















}
