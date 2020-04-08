//============================================================================
// Name        : vector_2d_array.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector < vector <int> > mat;
	vector <int> rows;
	for(int i=0; i<3; i++)
			mat.push_back(rows);
	for(int i=0; i<mat.size(); i++) {
			for(int j=0; j<mat[i].size(); j++)
				cout << mat[i][j] << ", ";
			cout << endl;
		}













}
