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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode * listone = list1 ;
       ListNode * listtwo = list2 ;
       ListNode * dummy = new ListNode (-1) ;
       ListNode * tail = dummy ;

        while ( listone != NULL && listtwo != NULL ) {
            if ( listone-> val <= listtwo-> val ) {
                tail->next = listone ;
                listone = listone-> next ;
            }
            else {
                tail->next = listtwo ;
                listtwo = listtwo-> next ;
            }
            tail = tail->next ;
        }
        if ( listone != NULL ) {
            tail-> next = listone;
        }
        if ( listtwo != NULL ) {
            tail-> next = listtwo;
        }
        return dummy->next ;
    }
};