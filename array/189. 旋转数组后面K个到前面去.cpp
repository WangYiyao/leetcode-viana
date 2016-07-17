#include<stdio.h>
#include<list>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<unordered_map>
#include <fstream>
#include<string>
using namespace std;
/****************  Runtime: 24 ms  *****************/
void rotate(vector<int>& nums, int k) {
	int n = nums.size();
	vector<int> vecRight;
	if(n < k){
		k = k%n;
	}
	for(int i = n-k; i < n; i++){
		vecRight.push_back(nums[i]);
	}
	for(int i = k; i < n; i++){
		vecRight.push_back(nums[i-k]);
	}
	nums = vecRight;
	
}

int main(){
	int a[6] = {1,0,-1,0,0,2};

	vector<int> vec(a+0,a+6);
	rotate(vec,7);

	//for(vector<vector<int>>::iterator p1 = s.begin(); p1 != s.end(); p1++){
		for(vector<int>::iterator p2 = vec.begin(); p2 != vec.end(); p2++){
			cout<<*p2<<" ";
		//}
		//cout<<endl;
	}
	//cout<<s<<endl;
	return 0;
}
