<<<<<<< HEAD
#include<stdio.h>
#include<list>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<unordered_map>
#include <fstream>
#include<string>
#include<list>
using namespace std;
/****************  Runtime: 52 ms  *****************/
bool containsDuplicate(vector<int>& nums) {
	unordered_map<int,int> map;
	int i = 0;
	for(vector<int>::iterator p = nums.begin(); p != nums.end(); p++){
		if(map.find(*p) != map.end()){
			return true;
		}
		map[*p] = i;
		i++;
	}
	return false;
}
int main(){
	int a[] = {0,1,3,6,6,6};
	vector<int> vec(a+0,a+6);
	cout<<containsDuplicate(vec);
	return 0;
}