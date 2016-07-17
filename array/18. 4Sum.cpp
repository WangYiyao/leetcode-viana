#include<stdio.h>
#include<list>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
/****************  Runtime: 101 ms  *****************/
vector<int> fourSum(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
	vector<vector<int> > res;
	if (nums.empty())
            return res;
    if(nums.size()<4)
		return res;

	for(int i = 0; i < nums.size()-3;i++){
		//int target3 = target - nums[i];
		for(int j = i+1; j < nums.size()-2;j++){
			int front = j+1;
			int back = nums.size()-1;
			//int target2 = target3 - nums[j];

			while(front < back){
				int tem = nums[front]+nums[back]+nums[i]+nums[j];
			if(tem < target)
				front++;
			else if(target < tem)
				back--;
			else{
				vector<int> vec;
				vec.push_back(nums[i]);
				vec.push_back(nums[j]);
				vec.push_back(nums[front]);
				vec.push_back(nums[back]);
				res.push_back(vec);

				while(front<back && nums[front] == vec[2])
					front++;
				while(front<back && nums[back] == vec[3])
					back--;
			}
			}
			while(j+1 < nums.size() && nums[j] == nums[j+1])
				j++;
		}
		while(i+1 < nums.size() && nums[i] == nums[i+1])
			i++;
	}
	return res;
 }
int main(){
	int a[6] = {1,0,-1,0,-2,2};

	vector<int> vec(a+0,a+6);
	vector<vector<int> > s = fourSum(vec,0);

	for(vector<vector<int>>::iterator p1 = s.begin(); p1 != s.end(); p1++){
		for(vector<int>::iterator p2 = (*p1).begin(); p2 != (*p1).end(); p2++){
			cout<<*p2<<" ";
		}
		cout<<endl;
	}
	//cout<<s<<endl;
	return 0;
}
