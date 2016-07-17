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
/****************  Runtime: 16 ms  *****************/
int missingNumber(vector<int>& nums) {
    int length = nums.size();  
    int result = 0 ;  
    for (int i=0; i<length; i++)  
    {  
        result ^= nums[i];  
    }  
    return result;
}


int main(){
	int a[] = {0,1,2,3,0,2,3};
	vector<int> vec(a,a+7);
	int p = missingNumber(vec);
	//for(int i = 0; i<9; i++){
		//cout<<vec[i]<<endl;
	//}
	cout<<p;
	return 0;
}