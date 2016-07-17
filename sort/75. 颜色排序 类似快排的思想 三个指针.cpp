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
/****************  Runtime: 5ms  *****************/
void sortColors(vector<int>& nums) {
    int h = nums.size()-1;
	int l = 0, m = 0,temp = 0;
	while(m <= h){
		if(nums[m]==0){
			temp = nums[m];
			nums[m] = nums[l];
			nums[l] = temp;
			m++;
			l++;
		}
		else if(nums[m]==2){
			temp = nums[m];
			nums[m] = nums[h];
			nums[h] = temp;
			h--;
		}
		else{
			m++;
		}
	}
}

int main(){
	int a[] = {1,2,2,0,0,0,1,2,0};
	vector<int> vec(a,a+9);
	sortColors(vec);
	for(int i = 0; i<9; i++){
		cout<<vec[i]<<endl;
	}
	
	return 0;
}