#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <unordered_map>
using namespace std;


bool containsNearbyDuplicate(vector<int>& nums, int k) {
	int n = nums.size();
	unordered_map<int,int> map;
	for(int i = 0; i < n; i++){
		unordered_map<int,int>::iterator iter = map.find(nums[i]);
		if(iter != map.end()){
			if(i - (*iter).second <= k){
				return true;
			}
			else{
				map[nums[i]] = i;
			}
		}
		else{
			map[nums[i]] = i;
		}
	}
	return false;
}

int main()
{
	int a[] = {1,0,1,1};
	vector<int> vec(a,a+4);

	for(vector<int>::iterator p = vec.begin(); p != vec.end(); p++){
		cout<<*p<<endl;
	}
	cout<<containsNearbyDuplicate(vec,1);
}