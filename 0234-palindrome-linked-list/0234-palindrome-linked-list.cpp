/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        while(head != NULL){
            arr.push_back(head->val);
            head = head->next;
        }
        int start = 0;
        int end = arr.size() - 1;
        while(start < end){
            if(arr[start] != arr[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
*/
class Solution {
public:
    ListNode* reverse(ListNode* head) {//reverse function
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {//check palindrome function
        if (head == NULL || head->next == NULL)
            return true;
        ListNode* slow = head;//calculate mid 
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* p1 = reverse(slow);
        ListNode* p2 = head;
        while (p1) {//start a pointer from head as p1 and slow as p2 and compare till p2 is not null return false if not equal else return true
            if (p1->val != p2->val)
                return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};