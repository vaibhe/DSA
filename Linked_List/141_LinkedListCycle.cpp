class Solution {
public:
    bool hasCycle(ListNode *head) {
        if ( head == NULL ){
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL && slow != NULL){
            fast = fast -> next;
            if ( fast != NULL){
                fast = fast -> next;
            }

              if ( fast == NULL){
                return false;
            }

            slow = slow -> next;
            if ( fast == slow){
                return true;
            }
        }
        return false;
            }
};