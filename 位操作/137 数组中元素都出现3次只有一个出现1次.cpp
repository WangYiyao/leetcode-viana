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
int singleNumber(vector<int> A) {
        int one,two,three;
        one=two=three=0;
		int n = A.size();
        for(int i=0;i<n;i++)
        {//一定是出现3次，2次，1次这样的顺序，如果反过来的话，先更新了one的话，会影响到two和three的
            three =  two & A[i];//已经出现了两次，还出现了一次
            two = two | one & A[i];//出现了1次又出现了1次，在加上以前已经出现了2次的，为新的出现了2次的
            one = one | A[i];//出现了1次
            //将出现3次的其出现1次2次全部抹去
            one = one & ~three;
            two = two & ~three;
        }
         return one;
    }


int main(){
	int a[] = {2,3,2,2};
	vector<int> vec(a,a+4);
	int p = singleNumber(vec);
	//for(int i = 0; i<9; i++){
		//cout<<vec[i]<<endl;
	//}
	cout<<p;
	return 0;
}