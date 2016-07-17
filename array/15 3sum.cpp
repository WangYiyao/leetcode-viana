#include<stdio.h>
#include<list>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/****************  Runtime: 64 ms  *****************/
vector<vector<int>> threeSum(vector<int>& nums) {
	std::sort(nums.begin(),nums.end());
	vector<vector<int> > res;
	for(int i = 0; i < nums.size(); i++){
		int target = -nums[i];
		int front = i + 1;
		int back = nums.size() - 1;
		

		while(front<back){
			int sum = nums[front] + nums[back];
			if(target < sum)
				back--;
			else if(sum < target)
				front++;
			else{
				vector<int> mres;
				mres.push_back(nums[i]);
				mres.push_back(nums[front]);
				mres.push_back(nums[back]);
				res.push_back(mres);

				while(front<back && nums[front] == mres[1])
					front++;
				while(front<back && nums[back] == mres[2])
					back--;
			}

			while(i<nums.size()-1 && nums[i] == nums[i+1])
				i++;
		}
	}
	return res;
        
}
int main(){
	int a[10] = {-1,0,1,2,-1 ,-4,9,-4,-3,7};

	vector<int> vec(a+0,a+10);
	vector<vector<int> > s = threeSum(vec);

	for(vector<vector<int>>::iterator p1 = s.begin(); p1 != s.end(); p1++){
		for(vector<int>::iterator p2 = (*p1).begin(); p2 != (*p1).end(); p2++){
			cout<<*p2<<" ";
		}
		cout<<endl;
	}
	return 0;
}
