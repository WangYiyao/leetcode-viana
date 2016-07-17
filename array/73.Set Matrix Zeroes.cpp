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
/****************  Runtime: 52 ms  *****************/
void setZeroes(vector<vector<int>>& matrix) {
	if(matrix.empty()) return;
	int m = matrix.size(),n = matrix[0].size();
	vector<int> col;
	for(int i = 0; i < matrix.size(); i++){
		for(int j = 0; j < matrix[0].size();j++){
			if(matrix[i][j] == 0){
				matrix[i].assign(n,0);
				col.push_back(j);
				break;
			}
		}
	}

	for(int i = 0; i < col.size(); i++){
		for(int j = 0; j < m; j++){
		 matrix[j][i] = 0;
		}
	}
 }
int main(){
	int a[5][5] = {{2,3,4,2,5},{0,1,1,2,4},{6,2,1,0,7},{8,9,1,4,4},{8,7,5,6,5}};
	vector<vector<int> > vec;
	for(int i = 0; i < 5; i++){
		vector<int> tep(a[i],a[i]+5);
		vec.push_back(tep);
	}
	setZeroes(vec);
	for(int i = 0; i < 5;i++){
		for(int j = 0; j<5; j++){
		 cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}