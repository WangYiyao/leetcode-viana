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
        {//һ���ǳ���3�Σ�2�Σ�1��������˳������������Ļ����ȸ�����one�Ļ�����Ӱ�쵽two��three��
            three =  two & A[i];//�Ѿ����������Σ���������һ��
            two = two | one & A[i];//������1���ֳ�����1�Σ��ڼ�����ǰ�Ѿ�������2�εģ�Ϊ�µĳ�����2�ε�
            one = one | A[i];//������1��
            //������3�ε������1��2��ȫ��Ĩȥ
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