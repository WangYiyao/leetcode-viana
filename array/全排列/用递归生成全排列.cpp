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
void permutation(vector<int>& a, int cnt, int n) {
   if(cnt == n)
    {
         for(int i = 0 ; i < n ; i ++) cout<<a[i]<<" ";
        cout<<endl;
    }
    for(int i = cnt ; i < n ; i ++)
    {
        swap(a[i],a[cnt]);
        permutation(a,cnt+1,n);
        swap(a[i],a[cnt]);
	}
}
int main(){
	int a[] = {1,2,3};
	vector<int> vec(a,a+3);
	permutation(vec,0,3);
	//for(int i = 0; i<3; i++){
		//cout<<vec[i]<<endl;
	//}
	return 0;
}