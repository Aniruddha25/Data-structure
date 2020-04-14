
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
void findMissing(vector<int> a, vector <int> b
                 )
{
    for (int i = 0; i < a.size(); i++)
    {
    	int j;

        for (j = 0; j < b.size(); j++)
            if (a[i] == b[j])
                break;

        if (j == b.size())
            cout << a[i] << " ";
    }
}

int main() {
	vector <int> array;
	string FileName;
	FileName = "file.txt";
	ifstream inFileStr(FileName);

	if(inFileStr.is_open()){
		int value;

		while(inFileStr >> value)
		{
		  array.push_back(value);

		}

	    }
vector <int> arr;
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(4);
arr.push_back(5);
arr.push_back(6);
arr.push_back(7);
arr.push_back(8);
arr.push_back(9);
findMissing(arr,array);



}
