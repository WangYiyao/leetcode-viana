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
void merge(vector<int>& vec, vector<int>& temp, int leftPos, int rightPos, int rightEnd){
	int leftEnd = rightPos -1;
	int tempPos = leftPos;
	int n = rightEnd - leftPos + 1;

	while(leftPos<=leftEnd && rightPos <= rightEnd){
		if(vec[leftPos] <= vec[rightPos])
			temp[tempPos++] = vec[leftPos++];
		else
			temp[tempPos++] = vec[rightPos++];
	}

	while(leftPos<=leftEnd){
		temp[tempPos++] = vec[leftPos++];
	}
	while(rightPos<= rightEnd){
		temp[tempPos++] = vec[rightPos++];
	}

	for(int i = 0; i < n; i++, rightEnd--){
		vec[rightEnd] = temp[rightEnd];
	}
}

void mergeSort(vector<int>& vec,vector<int>& temp, int left, int right){
	if(left < right){
		int center = (left + right)/2;
		mergeSort(vec,temp,left,center);
		mergeSort(vec,temp,center+1,right);
		merge(vec,temp,left,center+1,right);
	}
}

void mergeSort(vector<int>& vec){
	int n = vec.size();
	vector<int> temp(n);
	mergeSort(vec,temp,0,n-1);
}

int main(){
	int a[] = {1,2,2,0,0,0,1,2,0};
	vector<int> vec(a,a+9);
	mergeSort(vec);
	for(int i = 0; i<9; i++){
		cout<<vec[i]<<endl;
	}
	
	return 0;
}