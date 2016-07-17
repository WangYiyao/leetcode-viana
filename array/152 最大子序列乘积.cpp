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
int maxProduct(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int minres = 0, maxres = 0, res = 0, tmp;
        for(int i = 0; i < nums.size(); i++){
            tmp = maxres;
            maxres = max(nums[i],  max(maxres * nums[i], minres*nums[i]));
            minres = min(nums[i],  min(minres * nums[i], tmp*nums[i]));
            res = max(res, maxres);
        }
        return res;
    }

int main(){
	int a[] = {0,2};
	vector<int> vec(a,a+2);
	int o = maxProduct(vec);
	cout<<o;
	//for(int i = 0; i<6; i++){
		//cout<<vec[i]<<endl;
	//}
	return 0;
}