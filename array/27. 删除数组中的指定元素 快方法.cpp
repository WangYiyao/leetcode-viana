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
/****************  Runtime: 4 ms  *****************/
int removeElement(vector<int>& nums, int val) {
	int n = nums.size();
	int begin=0;
	for(int i=0;i<n;i++) if(nums[i]!=val) nums[begin++]=nums[i];
	return begin;
}

int main(){
	int a[] = {2,3,4,0,0,3,0};
	vector<int> vec(a+0,a+7);
	//cout<<
	removeElement(vec,0);

	for(vector<int>::iterator p = vec.begin(); p != vec.end(); p++){
		cout<<*p<<endl;
	}
	return 0;
}
