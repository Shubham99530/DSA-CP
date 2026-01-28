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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>min_heap;
        for (auto it:lists)
        {
            ListNode* temp = it;
            while(temp!=NULL)
            {
                min_heap.push(temp->val);
                temp = temp->next;
            }
        }
        ListNode* temp;
        ListNode* head=new ListNode(0);
        temp = head;
        while(min_heap.size() != 0)
        {
            ListNode* temp1 = new ListNode(min_heap.top());
            min_heap.pop();
            temp->next = temp1;
            temp = temp->next;
        }
        return head->next;
    }
};

// link : https://leetcode.com/problems/merge-k-sorted-lists/