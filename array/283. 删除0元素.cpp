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
/****************  Runtime: 34 ms  *****************/

void moveZeroes(vector<int>& nums) {
	int n = nums.size();
	if(n == 0 || n == 1){
		return;
	}
	vector<int>::iterator p = nums.begin();
	while(n--){
			if(*p == 0){
				p = nums.erase(p);
				p--;
				nums.push_back(0);
			}
			p++;
		}
}

int main(){
	int a[] = {2,3,4,0,0,3,0};
	vector<int> vec(a+0,a+7);
	moveZeroes(vec);

	for(vector<int>::iterator p = vec.begin(); p != vec.end(); p++){
		cout<<*p<<endl;
	}
	return 0;
}