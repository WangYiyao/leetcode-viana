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
int getMin(int a, int b){
	if(a<=b)
		return a;
	else
		return b;		
}

int shortestDistance(vector<string> words, string word1, string word2){
	int n = words.size();
	int index1 = -1, index2 = -1,result = n;
	int flag = 0, repeat = word1==word2 ? 1 : 0;
	for(int i = 0; i < n; i++){
		if(words[i] == word1 && flag%2 == 0){
			index1 = i;
			flag += repeat;
			if(index2 != -1)
				result = getMin(result,abs(index1-index2));
		}
		else if(words[i] == word2){
			index2 = i;
			flag += repeat;
			if(index1 != -1)
				result = getMin(result,abs(index2-index1));
		}
	}
	return result;

}

int main(){
	string a[] = {"main","main","hello"};
	vector<string> vec(a,a+3);
	int p = shortestDistance(vec,"main","main");
	//for(int i = 0; i<6; i++){
		//cout<<vec[i]<<endl;
	//}
	cout<<p;
	return 0;
}