//============================================================================
// Name        : 1st_nr_element.cpp
// Author      : ANIRUDDHA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

# include <iostream>
using namespace std;
 int main()
{
int a[5]={1,3,1,5,5 };

int test;
int i,j;
 for(i=0;i<5;i++)
{
  test=1;
 for(j=i+1;j<5 ;j++)
  {

 if(a[i]==a[j])// repeating found
 {
 test=0;
 break;
 }
 }

 if(test==1)// first  non repeating found do not proceed further
 break;
 }

if(test==1)
cout<<"first non repeating  found at position  "<<i+1;
else
   cout<<"No non repeating found"<<endl;

}
