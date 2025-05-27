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
    bool check(string s){
        int left=0,right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        string res;
        ListNode* temp=head;
        while(temp!=nullptr){
            res+=temp->val+'0';
            temp=temp->next;
        }
        if(check(res)){
            return true;
        }
        return false;
    }
};