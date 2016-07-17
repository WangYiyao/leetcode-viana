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
/****************  Runtime: 36 ms  *****************/
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){};
};

ListNode* removeElements(ListNode* head, int val) {
	if(head == NULL)
	{
		return head;
	}
	while(head->val == val){
		head = head->next;
		if(head == NULL)
		{
			return head;
		}
	}
	ListNode * p = head;
	while(p->next != NULL){
		if(p->next->val == val){
			p->next = p->next->next;
			continue;
		}
		p = p->next;
	}
	return head;
}

int main(){
	ListNode node0(6),node1(9),node2(4);
	//node0.next = &node1;
	//node1.next = &node2;
	ListNode * head = &node0;
	head = removeElements(head,6);

	while(head!=NULL){
		cout<<head->val<<endl;
		head = head->next;
	}

	return 0;
}