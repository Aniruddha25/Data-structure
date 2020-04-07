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
	list <int> l1;


	l1.push_back(20);//add_last_element
	l1.push_back(30);
	l1.push_front(10);//Add first element
	l1.push_front(90);
	l1.push_front(80);
	l1.pop_front();
	//For traversing linked list
	list <int> ::iterator trav;
	trav=l1.begin();
	while(trav!=l1.end())
	{
		cout<<*trav;
		trav++;
	}
	l1.remove(30);



	//Inside list duplicate element is allowed










}
