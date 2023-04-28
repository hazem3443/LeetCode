/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *resListHead = nullptr;

        // decide where is the head
        switch (((list2 != nullptr) << 1) | (list1 != nullptr))
        {
        case 0: // list1 is null
            break;
        case 1: // list1 is null
            resListHead = list1;
            list1 = list1->next;
            break;
        case 2: // list1 is null
            resListHead = list2;
            list2 = list2->next;
            break;
        case 3: // list1 is null
            if (list1->val <= list2->val)
            {
                resListHead = list1;
                list1 = list1->next;
            }
            else
            {
                resListHead = list2;
                list2 = list2->next;
            }
            break;
        default: // list1 is null
            break;
        }

        ListNode *curCur = resListHead;

        while ((list1 != nullptr) || (list2 != nullptr))
        {
            switch (((list2 != nullptr) << 1) | (list1 != nullptr))
            {
            case 0:
                /* both null */
                break;
            case 1:
                curCur->next = list1;
                list1 = nullptr; // force break
                break;
            case 2:

                curCur->next = list2;
                list2 = nullptr; // force break
                break;
            case 3:
                /* both not null */
                if (list1->val <= list2->val)
                {
                    // create the node
                    curCur->next = list1;
                    list1 = list1->next;
                }
                else
                {
                    curCur->next = list2;
                    list2 = list2->next;
                }

                curCur = curCur->next;
                break;
            default:
                break;
            }
        }

        return resListHead;
    } //[]\n[0]
};
// @lc code=end
