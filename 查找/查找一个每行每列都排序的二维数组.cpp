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
/****************  Runtime: 1 ms  *****************/
vector<int> fing(vector<vector<int>> nums, int target){
	vector<int> res;
	int rows = nums.size();
	if(rows == 0)
		return res;
	int cols = nums[0].size();

	int row = 0, col = cols-1;

	while(row < rows && 0 <= cols){
		if(nums[row][col] == target){
			res.push_back(row);
			res.push_back(col);
			return res;
		}
		else if(target < nums[row][col])
			--col;
		else
			++row;
	}
	res.push_back(row);
	res.push_back(col);
	return res;
}

int main(){
	int a1[] = {1,2,8,9};
	int a2[] = {2,4,9,12};
	int a3[] = {4,7,10,13};
	int a4[] = {6,8,11,5};
	vector<int> vec1(a1,a1+4);
	vector<int> vec2(a2,a2+4);
	vector<int> vec3(a3,a3+4);
	vector<int> vec4(a4,a4+4);
	vector<vector<int> > vec;
	vec.push_back(vec1);
	vec.push_back(vec2);
	vec.push_back(vec3);
	vec.push_back(vec4);

	vector<int> res = fing(vec,6);
	cout<<res[0]<<endl;
	cout<<res[1]<<endl;
	//for(int i = 0; i<2; i++){
		//cout<<s[i]<<endl;
	//
	return 0;
}