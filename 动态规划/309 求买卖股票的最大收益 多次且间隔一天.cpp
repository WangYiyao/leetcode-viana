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
int maxSubArray(vector<int>& nums) {
	int buy= INT_MIN, sell_1=0,sell_2=0;

    for (int i = 0; i < prices.size(); ++i)
    {
        buy =  i < 3 ? max(-prices[i], buy):max(sell_2-prices[i], buy);

        sell_2 = sell_1;

        sell_1 = max(sell_1, buy + prices[i]);
    }

    return sell_1;
}
int main(){
	int a[] = {1,2,3,7};
	vector<int> vec(a,a+4);
	int o = maxSubArray(vec);
	cout<<o;
	//for(int i = 0; i<6; i++){
		//cout<<vec[i]<<endl;
	//}
	return 0;
}