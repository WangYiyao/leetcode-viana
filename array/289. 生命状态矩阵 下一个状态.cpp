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
void gameOfLife(vector<vector<int>>& board) {
        int d[][2] = {{1,-1},{1,0},{1,1},{0,-1},{0,1},{-1,-1},{-1,0},{-1,1}};
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                int live = 0;
                for(int k = 0; k < 8; k++){
                    int x = d[k][0] + i;
                    int y = d[k][1] + j;
                    if(x < 0 || x >= board.size() || y < 0 || y >= board[0].size()) {
                        continue;
                    }
                    if(board[x][y] & 1) {
                        live++;
                    }
                }
                // 死的
                if(board[i][j] == 0) {  //不能改变原状态 所以前面要&1判断是否++live
                    if(live == 3){
                        board[i][j] = 2; // 2 : (10)
                    }
                }
                // 活的
                else {
                    if(live < 2 || live > 3){
                        board[i][j] = 1; // 1 : (01)
                    }else{
                        board[i][j] = 3; // 3 : (11)   
                    }
                }
            }
        }
        for(int i = 0; i < board.size(); i++){
            for(int j=0; j < board[0].size(); j++){
                board[i][j] >>=1;
            }
        }
    }
int main(){
	int a[5][5] = {{0,0,0,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,0,0,0}};
	vector<vector<int> > vec;
	for(int i = 0; i < 5; i++){
		vector<int> tep(a[i],a[i]+5);
		vec.push_back(tep);
	}
	gameOfLife(vec);

	for(int i = 0; i < 5;i++){
		for(int j = 0; j<5; j++){
		 cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}