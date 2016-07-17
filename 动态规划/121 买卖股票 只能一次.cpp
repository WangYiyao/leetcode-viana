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
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0)
        return 0;
	int minprice = prices[0],res = 0;
	for(int i = 0; i < n;i++){
		minprice = min(minprice,prices[i]);
		res = max(res,prices[i]-minprice);
	}
	return res;
    }
int main(){
	int a[] = {6,2,10};
	vector<int> vec(a,a+3);
	int o = maxProfit(vec);
	cout<<o;
	//for(int i = 0; i<6; i++){
		//cout<<vec[i]<<endl;
	//}
	return 0;
}