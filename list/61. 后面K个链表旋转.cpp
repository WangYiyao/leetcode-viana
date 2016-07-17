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
/****************  Runtime: 12 ms  *****************/
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){};
};

ListNode* rotateRight(ListNode* head, int k) {
	if(!head || k == 0){
		return head;
	}
	int n = 1;
	ListNode * tail = head;
	while(tail->next!= NULL){
		n++;
		tail = tail->next;
	}
	k = k %n;
	int m = n - k;
	if(m == 0 || n == m){
		return head;
	}
	ListNode * pPre = head, * pNode;
	while(--m){
		pPre = pPre->next;
	}
	pNode = pPre->next;
	pPre->next = NULL;
	tail->next = head;
	return pNode;


}
int getlen(ListNode * head){
	int len = 0;
	while(head != NULL){
		len++;
		head = head->next;
	}
	return len;
}

int main(){
	ListNode node0(6),node1(9),node2(4);
	//node0.next = &node1;
	//node1.next = &node2;
	ListNode * head = &node0;
	head = rotateRight(head,1);
	
	for(int i = 0; i < 3; i++){
		cout<<head->val<<endl;
		head = head->next;
	}

	return 0;
}
