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
/****************  Runtime: 52 ms  *****************/
void wiggleSort(vector<int>& nums) {
        // Write your code here
        for (int i=1; i<nums.size(); ++i)
        if (i%2 == (nums[i-1] > nums[i]))
            swap(nums[i-1], nums[i]);
   
 }

int main(){
	int a[] = {3,5,2,1,6,4};
	vector<int> vec(a,a+6);
	wiggleSort(vec);
	for(int i = 0; i<5; i++){
		cout<<vec[i]<<endl;
	}
	
	return 0;
}