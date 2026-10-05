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
    bool isPalindrome(ListNode* head) {
       vector<int>arr;
        vector<int>brr;
       while(head != NULL){
        arr.push_back(head->val);
        brr.push_back(head->val);
        head = head->next;
       }
      
       reverse(arr.begin(),arr.end());
       if(arr == brr) return true;
       else return false;
       
    }
};