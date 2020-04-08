//============================================================================
// Name        : closest.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void closestnumbers(vector<int> arr) {
    int l=arr.size();
    int diff[l];
    sort(arr.begin(), arr.end());
    int min = arr[1]-arr[0];
    for(int i=1; i < arr.size(); i++) {
        diff[i] = arr[i]- arr[i-1];
        if(min > diff[i])
             min = diff[i];
    }
    for(int i=1; i < arr.size(); i++) {
        if(diff[i] == min)
           cout << arr[i-1] << " " << arr[i] << " ";
    }
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }
    closestnumbers(arr);
    return 0;
}

