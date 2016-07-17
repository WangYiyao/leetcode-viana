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
//例如 1 2 | 4 6 5 3
void nextPermutation(vector<int>& nums) {
	int n = nums.size();
	if(n<2)
		return;
	//一 找到第一个增序列对 一定是从后面开始
	int i=n-2;
	for(; 0 <= i; i--){
		if(nums[i]<nums[i+1])
			break;
	}
	if(i<0)//不存在增序对 全部递减 下一个状态为初试的递增状态
		return reverse(nums.begin(), nums.end());

	//寻找第一个> i的数字 也是从后面开始
	int j = n-1;
	for(; i<j; j--){
		if(nums[i]<nums[j])
			break;
	}
	//交换 并寻找下一个排列
	swap(nums[i],nums[j]);
	reverse(nums.begin()+i+1,nums.end());
	return;
}
int main(){
	int a[] = {1,2,3};
	vector<int> vec(a,a+3);
	nextPermutation(vec);
	for(int i = 0; i<3; i++){
		cout<<vec[i]<<endl;
	}
	return 0;
}