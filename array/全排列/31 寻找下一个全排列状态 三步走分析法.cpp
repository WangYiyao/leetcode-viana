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
//���� 1 2 | 4 6 5 3
void nextPermutation(vector<int>& nums) {
	int n = nums.size();
	if(n<2)
		return;
	//һ �ҵ���һ�������ж� һ���ǴӺ��濪ʼ
	int i=n-2;
	for(; 0 <= i; i--){
		if(nums[i]<nums[i+1])
			break;
	}
	if(i<0)//����������� ȫ���ݼ� ��һ��״̬Ϊ���Եĵ���״̬
		return reverse(nums.begin(), nums.end());

	//Ѱ�ҵ�һ��> i������ Ҳ�ǴӺ��濪ʼ
	int j = n-1;
	for(; i<j; j--){
		if(nums[i]<nums[j])
			break;
	}
	//���� ��Ѱ����һ������
	swap(nums[i],nums[j]);
	reverse(nums.begin()+i+1,nums.end());
	return;
}
int main(){
	int a[] = {1,2,3};
	vector<int> vec(a,a+3);
	nextPermutation(vec);
	for(int i = 0; i<3; i++){
		cout<<vec[i]<<endl;
	}
	return 0;
}