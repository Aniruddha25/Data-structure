//============================================================================
// Name        : builtinstack.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<string> s;
	s.push("ab");
	s.push("cd");
	s.push("ef");
	s.pop();
	cout<<s.top();
	cout<<endl;
	cout<<s.size();
	cout<<endl;
	cout<<s.empty();





}
