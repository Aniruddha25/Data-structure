//============================================================================
// Name        : STL_set_container.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
using namespace std;

int main() {
	set <int> s;
	s.insert(10);
	s.insert(30);
	s.insert(30);//to not insert duplicate value in set
	s.insert(20);
	set <int> ::iterator trav;
	trav =s.begin();
	while(trav!=s.end()){
		cout<<*trav;
		trav++;

	}



}
