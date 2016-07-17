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
vector<int> searchRange(vector<int>& nums, int target) { 
        int i = 0 , j = nums.size() - 1, k = -1, k1 = -1, k2 = -1 ; 
		vector<int> res;
        while(i <= j){
            /*binary search*/
            int m = (i + j)/ 2;
            if(nums[m] == target){
                k = m;
                break;
            }else if(nums[m] < target){
                i = m + 1;
            }else if(nums[m] > target){
                j = m - 1;
            }
        }
        if(k == -1){
			res.push_back(-1);
			res.push_back(-1);
			return res;
		}
        i = 0, j = k,k1=k,k2=k;
        while(i <= j){
            int m = (i + j)/ 2;
            if(nums[m] == target){
                k1 = m;
                j = m  - 1;
            }else if(nums[m] < target){
                i = m + 1;
            }
        }
        i = k, j = nums.size() - 1;
        while(i <= j){
            int m = (i + j)/2;
            if(nums[m] == target){
                k2 = m;
                i = m + 1;
            }else if(nums[m] > target){
                j = m - 1;
            }
        }

		res.push_back(k1);
		res.push_back(k2);
		return res;

    }
int main(){
	int a[] = {1,1,2};
	vector<int> vec(a,a+3);
	vector<int> s = searchRange(vec,1);
	for(int i = 0; i<2; i++){
		cout<<s[i]<<endl;
	}
	return 0;
}