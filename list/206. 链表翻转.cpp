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
/****************  Runtime: 24 ms  *****************/
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){};
};

ListNode* reverseList(ListNode* head) {
	ListNode * pReversedHead = NULL;
	ListNode * pPre = NULL;
	ListNode *pNode = head;

	while(pNode != NULL){
		ListNode * pNext = pNode->next;
		if(pNext == NULL){
			pReversedHead = pNode;
		}
		pNode->next = pPre;
		pPre = pNode;
		pNode = pNext;
	}
	return pReversedHead;
}

int main(){
	ListNode node0(6),node1(9),node2(4);
	node0.next = &node1;
	node1.next = &node2;
	ListNode * head = &node0;
	head = reverseList(head);
	
	for(int i = 0; i < 3; i++){
		cout<<head->val<<endl;
		head = head->next;
	}

	return 0;
}
