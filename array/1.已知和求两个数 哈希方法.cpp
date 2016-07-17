#include<stdio.h>
#include<list>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<unordered_map>
using namespace std;
/****************  Runtime: 101 ms  *****************/
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
		vector<int> vec;
		int n = nums.size();

		for(int i = 0; i < n; i++){
			if(map.find(target-nums[i]) != map.end()){//ур╣╫ак
				vec.push_back(map[target-nums[i]]);
				vec.push_back(i+1);
				return vec;
			}
			else{
				map[nums[i]] = i+1;
			}
		}
    }
int main(){
	int a[6] = {1,0,-1,0,0,2};

	vector<int> vec(a+0,a+6);
	vector<int> s = twoSum(vec,0);

	//for(vector<vector<int>>::iterator p1 = s.begin(); p1 != s.end(); p1++){
		for(vector<int>::iterator p2 = s.begin(); p2 != s.end(); p2++){
			cout<<*p2<<" ";
		//}
		//cout<<endl;
	}
	//cout<<s<<endl;
	return 0;
}
