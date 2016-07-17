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

void deleteNode(ListNode* node) {
	if(node==NULL) return;  
	node->val = node->next->val;  
	node->next = node->next->next;
}

int main(){
	ListNode node0(6),node1(9),node2(4);
	node0.next = &node1;
	node1.next = &node2;
	ListNode * head = &node0;
	deleteNode(head);

	while(head!=NULL){
		cout<<head->val<<endl;
		head = head->next;
	}

	return 0;
}