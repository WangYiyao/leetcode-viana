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
int maxArea(vector<int>& height) {
	int n = height.size();
	int left = 0, right = n-1;
	int result = 0;
	if(n==0 || n==1)
		return result;
	while(left < right){
		int water = min(height[left],height[right])*(right-left);
		result = max(result,water);
		if(height[left]<=height[right])
			left++;
		else
			right--;
	}
	return result;
}

int main(){
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	vector<int> vec(a,a+10);
	int o = maxArea(vec);
	cout<<o;
	//for(int i = 0; i<6; i++){
		//cout<<vec[i]<<endl;
	//}
	return 0;
}