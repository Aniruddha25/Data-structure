//============================================================================
// Name        : Hash_table.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// Hash table Time complexity o(1)
//Faster searching algorithm
//equivalent concept hashmap in java,dictionary - python ,map in c++
//key-value pair
//duplicate key is not allowed
//older value will be replaced in case of duplicate entry
//In multimap duplicate keys are allowed
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;


int main() {
	map<int,float> m;
	for(int i=0;i<50;i++)
	{
		m[i]=i+49;
	}
	int rn;
	cin>>rn;
	float  marks=m[rn];
	cout<<marks<<endl;
	map<int,float>::iterator itr =m.begin();
	while(itr!=m.end())
	{
		cout<<itr->first<< " " <<itr->second;
		itr++;
	}
	cout<<endl;
	pair <int,float> p(51,90);
	m.insert(p);
	map<string,string> instaid;
	instaid["ANIRUDDHA"]="AMK96";
	instaid["Rajat"] ="rajat987";
	instaid["ANIRUDDHA"]="amk9449";
	cout<<instaid["ANIRUDDHA"];










}
