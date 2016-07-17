#include<stdio.h>
#include<list>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
/****************  Runtime: 12 ms  *****************/
int threeSumClosest(vector<int> nums, int target) {
	std::sort(nums.begin(), nums.end());
	int i = 0, front = 1, back = nums.size()-1;
	int res = nums[i] + nums[front]+nums[back];
	for(i = 0; i < nums.size(); i++){
		front = i+1;
		back = nums.size()-1;

		while(front<back){			
			int temporary = nums[i] + nums[front]+nums[back];
			res = abs(res-target)<abs(temporary-target) ? res : temporary;
			if(temporary<target)
				front++;
			else if(target<temporary)
				back--;
			else
				return res;
			//temporary=nums[i] + nums[front]+nums[back];
			//res = abs(res-target)<abs(temporary-target) ? res : temporary;
		}
	}
	return res;
}
int main(){
	int a[35] = {1,2,33,23,2423,33,23,1,7,6,8787,5,33,2,3,-23,-54,-67,100,400,-407,-500,-35,-8,0,0,7,6,0,1,2,-56,-89,24,2};

	vector<int> vec(a+0,a+35);
	int s = threeSumClosest(vec,148);

	/*for(vector<vector<int>>::iterator p1 = s.begin(); p1 != s.end(); p1++){
		for(vector<int>::iterator p2 = (*p1).begin(); p2 != (*p1).end(); p2++){
			cout<<*p2<<" ";
		}
		cout<<endl;
	}*/
	cout<<s<<endl;
	return 0;
}
