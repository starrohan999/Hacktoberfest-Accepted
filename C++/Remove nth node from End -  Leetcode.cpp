struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;
        ListNode* fast=head, *slow=head;
       while(n--)
            fast=fast->next;
        
        if(fast==NULL) return head->next;
        
         while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;}
        
        if(slow->next==NULL)
            slow->next=NULL;
         else
        slow->next=slow->next->next;
        return head;
    }
};