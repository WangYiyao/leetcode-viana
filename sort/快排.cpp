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
//��������
void quiksort(vector<int>& nums,int left,int right){
	if(right <= left)
		return;

	int temp = nums[left];
	int i = left, j = right;

	while(i<j){
		while(temp <= nums[j] && i < j)  //һ�����ұ߿�ʼ��
			j--;
		while(nums[i] <= temp && i < j)  //���
			i++;
		if(i<j){  //����
			int t = nums[i];
			nums[i] = nums[j];
			nums[j] = t;
		}
	}// end while

	nums[left] = nums[i];
	nums[i] = temp;

	quiksort(nums, left, i-1);
	quiksort(nums, i+1,right);
}

int main(){
	int a[] = {1,2,2,0,0,0,1,2,0};
	vector<int> vec(a,a+9);
	sortColors(vec);
	for(int i = 0; i<9; i++){
		cout<<vec[i]<<endl;
	}
	
	return 0;
}