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
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> tmp;
        backtracking(res, tmp, candidates, target, 0);
        return res;
    }
void backtracking(vector<vector<int>>& res, vector<int>& tmp, vector<int>& candidates, int target, int index){
        if(target < 0) return;
        if(target == 0) {
            res.push_back(tmp);
            return;
        }
        for(int i = index; i < candidates.size(); i++){
            tmp.push_back(candidates[i]);
            backtracking(res, tmp, candidates, target - candidates[i], i);
            tmp.pop_back();
        }
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