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
    vector<int>linkedlisttovector(ListNode* head){
        vector<int>arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        return arr;
    }
    ListNode*vectortolinkedlist(vector<int>vec){
        if(vec.empty()) return NULL;
        ListNode* head=new ListNode(vec[0]);
        ListNode* current=head;
        for(int i=1;i<vec.size();i++){
            current->next=new ListNode(vec[i]);
            current=current->next;
        }
        return head;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int>list=linkedlisttovector(head);
        
        unordered_set<int>s(nums.begin(),nums.end());
        
        vector<int>res;
        
        for(auto it:list){
            if(s.find(it)==s.end()){
                res.push_back(it);
            }
        }
        return vectortolinkedlist(res);
    }
};