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
       ListNode *resListHead = nullptr; // holdthe head ele
        ListNode *curCur = nullptr;
        ListNode *list1Cur = list1;
        ListNode *list2Cur = list2;
        
        while ((list1Cur != nullptr) && (list2Cur != nullptr))
        {
            if (list1Cur->val <= list2Cur->val)
            {
                // create the node
                if (curCur == nullptr)
                {
                    resListHead = new ListNode(list1Cur->val);
                    curCur = resListHead;
                }
                else
                {
                    curCur->next = new ListNode(list1Cur->val);
                    curCur = curCur->next;
                }
                list1Cur = list1Cur->next;
            }
            else
            {
                if (curCur == nullptr)
                {
                    resListHead = new ListNode(list2Cur->val);
                    curCur = resListHead;
                }
                else
                {
                    curCur->next = new ListNode(list2Cur->val);
                    curCur = curCur->next;
                }
                list2Cur = list2Cur->next;
            }
            // std::cout << "list1 val = " << list1Cur->val << std::endl;
            // std::cout << "list2 val = " << list2Cur->val << std::endl;
        }
        while (list1Cur != nullptr)
        {
            if (curCur == nullptr)
            {
                resListHead = new ListNode(list1Cur->val);
                curCur = resListHead;
            }
            else
            {
                curCur->next = new ListNode(list1Cur->val);
                curCur = curCur->next;
            }
            list1Cur = list1Cur->next;
        }
        
        while (list2Cur != nullptr)
        {
            if (curCur == nullptr)
            {
                resListHead = new ListNode(list2Cur->val);
                curCur = resListHead;
            }
            else
            {
                curCur->next = new ListNode(list2Cur->val);
                curCur = curCur->next;
            }
            list2Cur = list2Cur->next;
        }


        return resListHead; 
    }
};