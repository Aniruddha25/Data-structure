//============================================================================
// Name        : tuples.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<tuple> // for tuple
using namespace std;
int main()
{
   tuple <int,int,float> t;
   t=make_tuple(1,1,30.0);
   cout<< get<0>(t)<<endl;
   tuple <int,int,float> p(1,2,30);
   t.swap(p);//swapping elements in two tuples
   cout<<get<1>(p)<<endl;
   int i,j;
   float k;
   tie(i,j,k)=t;//for separating each tuple element
   cout<<i<<j<<k<<endl;
   auto tup = tuple_cat(t,p);//for concating two tuples
   cout<<get<4>(tup)<<endl;





}
