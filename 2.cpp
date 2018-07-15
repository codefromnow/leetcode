#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std; 

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){} 
};
class Solution {
public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1=l1;
		ListNode* last1=new ListNode(0);
        ListNode* p2=l2;
		ListNode* last2=new ListNode(0);
        ListNode* last=new ListNode(0);
        ListNode* res=last;
        //��λ��ֵ
        int lastvalue=0;
        while(p1&&p2){
            ListNode* newnode=new ListNode((p1->val+p2->val+lastvalue)%10);
            lastvalue=(p1->val+p2->val+lastvalue)/10;
            last->next=newnode;
            last=newnode;
            last1=p1;
            last2=p2;
            p1=p1->next;
            p2=p2->next;
        }
      
        while(p1){
            ListNode* newnode=new ListNode((p1->val+lastvalue)%10);
            last->next=newnode;
            last=newnode;
            lastvalue=(p1->val+lastvalue)/10;
            p1=p1->next;
        }
        while(p2){
            ListNode* newnode=new ListNode((p2->val+lastvalue)%10);
            last->next=newnode;
            last=newnode;
            lastvalue=(p2->val+lastvalue)/10;
            p2=p2->next;
        }
        if(lastvalue!=0){
            ListNode* newnode=new ListNode(lastvalue);
            last->next=newnode;
        }
        return res->next;
    }
};
int main(){
	Solution solution;
	ListNode* l1=new ListNode(2);
	ListNode* l2=new ListNode(5);
	ListNode* res=solution.addTwoNumbers(l1,l2);
	ListNode *p=res;
	while(p){
		cout<<p->val<<endl;
		p=p->next;
	} 
	return 0;
}
