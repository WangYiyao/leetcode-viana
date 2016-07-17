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
int numberOne(int n){
	int count = 0;
	while(n){
		count ++;
		n = n&(n-1);
	}
	return count;
}

int main(){
	int a[] = {1};
	vector<int> vec(a,a+1);
	cout<<numberOne(12);
	//for(int i = 0; i<2; i++){
		//cout<<s[i]<<endl;
	//
	return 0;
}