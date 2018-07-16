ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *p1,*p2;
        ListNode* headnode=(ListNode*)malloc(sizeof(struct ListNode));
        headnode->next=head;
        head=headnode;
        p1=head,p2=head->next;
        while(p2&&p2->next){
        p1->next=p2->next;
        p2->next=p1->next->next;
        p1->next->next=p2;
        p1=p2;
        p2=p2->next;    
        }
        head=head->next;
        return head;
    }
