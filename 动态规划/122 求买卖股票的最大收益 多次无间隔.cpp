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
  if(prices.size() <= 1) return 0;

  int res = 0;

  for( size_t i = 1; i < prices.size(); i++)
    if( prices[i] - prices[i-1] > 0 ) 
      res += prices[i] - prices[i-1];

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