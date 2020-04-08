//============================================================================
// Name        : STL_linked_list.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list> //
#include <algorithm>
using namespace std;

int main() {
	//Inside list duplicate element is allowed
	list <int> l1;


	l1.push_back(20);//add_last_element
	l1.push_back(30);
	l1.push_front(10);//Add first element
	l1.push_front(90);
	l1.push_front(80);
	l1.pop_front();//remove first element
	//For traversing linked list
	list <int> ::iterator trav;

	l1.remove(30);//to remove 30 from list
	l1.sort();//sorting the list
	l1.reverse();//Reversing the list
	trav=l1.begin();
		while(trav!=l1.end())
		{
			cout<<*trav;
			trav++;
		}
		cout<<endl;
	list <int> l2;
	l2.push_back(110);
	l2.push_back(120);
	l2.push_back(130);
	l2.push_back(140);
	//Merging two list together
	l2.merge(l1);
	l2.sort();

	list <int>::iterator trav1;
	trav1=l2.begin();
	while(trav1!=l2.end())
	{
		cout<<*trav1<<'\t';
		trav1++;
	}

















}
