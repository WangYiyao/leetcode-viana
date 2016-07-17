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
//链表适合使用归并排序，不需要额外申请n的空间 而且比快拍之类的快（链表寻秩访问慢）
/****************  Runtime: 64 ms  *****************/
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){};
};

ListNode* merge(ListNode* leftPos, ListNode* rightPos){
	ListNode nu(0); //此处哨兵节点不能设置为空，一定要初始化。因为后续使用了p->next
	ListNode* head = &nu, *p = head;
	while((leftPos!=NULL)&&(rightPos!=NULL)){
		if(leftPos->val <= rightPos->val){
			p->next = leftPos;
			p = leftPos;
			leftPos = leftPos->next;
		}
		else{
			p->next = rightPos;
			p = rightPos;
			rightPos = rightPos->next;
		}
	}//end while
	p->next = (leftPos==NULL) ? rightPos : leftPos;
	return head->next;
}

ListNode* mergeSort(ListNode* head) {
	if(head == NULL || head->next == NULL)
		return head;
	ListNode* leftEnd = head, * rightEnd = head->next;
	while(rightEnd!=NULL && rightEnd->next!=NULL){
		leftEnd = leftEnd->next;
		rightEnd = rightEnd->next->next;
	}
	ListNode* rightPos = leftEnd->next;
	leftEnd->next = NULL;
	ListNode* leftPos = head;
	return merge(mergeSort(leftPos),mergeSort(rightPos));
}

int main(){
	ListNode* head = new ListNode(2);
	head->next = new ListNode(0);
	head->next->next = new ListNode(-8);
	head->next->next->next = new ListNode(10);
	head->next->next->next->next = new ListNode(5);

	ListNode* p = mergeSort(head);
	while(p!=NULL){
		cout<<p->val<<endl;
		p = p->next;
	}

	return 0;
}