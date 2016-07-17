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
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
         vector<int> elements;
         sort(candidates.begin(),candidates.end());
         elementSum(candidates,res,elements,target,0);
         return res;
    }
    void elementSum(vector<int>&candidates,vector<vector<int>>&res,vector<int>&elements,int target,int start) {
                   // if the sum of the elements is equal to the target, push this combination into the result
        if(!target){                           
            res.push_back(elements);return;    
        }
        for(int i=start;i<candidates.size();i++){
                    // we always want to count the first element in this recursive step even if it is the same 
                    // as one before. To avoid overcounting, we just ignore the duplicates
                    // after the first element.
            if(i>start && candidates[i]==candidates[i-1]) continue;

                    // if current element is bigger than the assigned target, there is 
                    //  no need to keep searching, since all the numbers are positive and sorted
            if(candidates[i]>target) break;
                    //push the valid candidate into the elements vector.
            elements.push_back(candidates[i]);
                    // keep searching for new element with start as `i + 1` because one element can be used only once
            elementSum(candidates,res,elements,target-candidates[i],i+1);
            elements.pop_back(); 
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