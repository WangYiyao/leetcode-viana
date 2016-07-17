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
/****************  Runtime: 32 ms  *****************/
int removeDuplicates(vector<int>& nums) {
	if(nums.empty()){
		return 0;
	}
	int n = nums.size(), len = 0;
	for(int i = 1; i < n; i++){
		if(nums[len] != nums[i]){
			nums[++len] = nums[i];
		}
	}
	return len+1;
}

int main(){
	int a[] = {0,1,3,6,6,6};
	vector<int> vec(a+0,a+6);
	cout<<removeDuplicates(vec);

	for(vector<int>::iterator p = vec.begin(); p != vec.end(); p++){
		cout<<*p<<endl;
	}
	return 0;
}
