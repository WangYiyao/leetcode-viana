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
long long fibonacci(int n){
	if(n==0 || n==1)
		return n;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

long long fib2(int n){
	if(n==0 || n== 1)
		return n;

	long long preOne = 1;
	long long preTwo = 0;
	long long res = 0;
	for(int i = 2; i <= n; i++){
		res = preOne + preTwo;
		preTwo = preOne;
		preOne = res;
	}
	return res;
}

int main(){
	int a[] = {1};
	vector<int> vec(a,a+1);
	cout<<fib2(3);
	//for(int i = 0; i<2; i++){
		//cout<<s[i]<<endl;
	//
	return 0;
}