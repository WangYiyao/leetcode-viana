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
/****************  Runtime: 128 ms  *****************/
int maxSubArray(vector<int>& nums) {
	int n = nums.size();
	if(n==1)
		return nums[0];

	int maxres = nums[0], res=nums[0];
	for(int i = 1; i < n;i++){
		maxres=max(nums[i],maxres+nums[i]);
		res=max(res,maxres);
	}
	return res;
}
int main(){
	int a[] = {1,-2,3,-7};
	vector<int> vec(a,a+4);
	int o = maxSubArray(vec);
	cout<<o;
	//for(int i = 0; i<6; i++){
		//cout<<vec[i]<<endl;
	//}
	return 0;
}