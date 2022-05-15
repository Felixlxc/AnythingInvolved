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

// sln2 

// sln 1
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *n1, *n2, *head, *p;
        n1 = l1;
        n2 = l2;
        p = new ListNode();
        head = p;
        int add = 0;
        while (n1 || n2) {
            int t = 0;
            if (n1) {
                t += n1->val;
                head->next = n1;
                n1 = n1->next;
            }
            if (n2) {
                t += n2->val;
                if (!n1) head->next = n2;
                n2 = n2->next;
            }
            t += add;
            add = t/10;
            head->next->val = t%10;
            head = head->next;
        }
        if (add) {
            ListNode* tmp = new ListNode(add);
            head->next = tmp;
        }
        return p->next;
        //return reverse(p->next);
    }

    ListNode* reverse(ListNode* n) {
        if (!n || !n->next) return n;
        ListNode *tmp = reverse(n->next);
        n->next->next = n;
        n->next = nullptr;
        return tmp;
    }
};


