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
/****************  Runtime: 36 ms  *****************/
int missingNumber(vector<int>& nums) {
  int n = nums.size();
  int sum = (1+n)*n/2;
  for(int i = 0; i<n; i++){
	sum -= nums[i];
  }
  return sum;
}


int main(){
	int a[] = {0,1,2,3};
	vector<int> vec(a,a+4);
	int p = missingNumber(vec);
	//for(int i = 0; i<9; i++){
		//cout<<vec[i]<<endl;
	//}
	cout<<p;
	return 0;
}