/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode * reverselist( ListNode * head ) {
       ListNode * prev = NULL ;
       ListNode * curr = head ;
       ListNode * newNode =NULL; 
        while ( curr != NULL ) {
            newNode = curr-> next ;
            curr->next = prev ;
            prev = curr ;
            curr = newNode ;
        }
        return prev ;
    }
    bool isPalindrome(ListNode* head) {
        if ( head == NULL ) {
            return true ;
        }
        ListNode * slow = head ;
        ListNode * fast = head ;

        while ( fast != NULL && fast->next != NULL ){
            slow = slow-> next ;
            fast = fast-> next -> next ;
        }
        ListNode * secondhalf = reverselist( slow ) ;
        while ( secondhalf != NULL ){
            if ( secondhalf-> val != head -> val ) {
                return false ;
            }
            secondhalf = secondhalf->next ;
            head = head->next ;
        }
        return true ;
    }
};