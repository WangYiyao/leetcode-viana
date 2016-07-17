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
/****************  Runtime: 1 ms  *****************/
int searchInsert(vector<int>& nums, int target) {
    int i = 0, j = nums.size(), m = 0;
    while( i < j ) {
        m = (i + j)>>2;
        if(target <= nums[m]) //×ó±ß
			j = m;
        else   //ÓÒ±ß
			i = m+1;
    }
    if(i==-1)
    i = 0;
    return i;
    }
int main(){
	int a[] = {1,1,2};
	vector<int> vec(a,a+3);
	int  s = searchInsert(vec,1);
	cout<<s;
	//for(int i = 0; i<2; i++){
		//cout<<s[i]<<endl;
	//
	return 0;
}