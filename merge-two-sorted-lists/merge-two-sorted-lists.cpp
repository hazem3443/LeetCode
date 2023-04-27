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
        ListNode *resListHead = nullptr; // holdthe head ele
        ListNode *curCur = nullptr;

        while ((list1 != nullptr) || (list2 != nullptr))
        {
            switch (((list2 != nullptr) << 1) | (list1 != nullptr))
            {
            case 0:
                /* both null */
                break;
            case 1:
                /* 1 null */
                while (list1 != nullptr)
                {
                    if (curCur == nullptr)
                    {
                        resListHead = new ListNode(list1->val);
                        curCur = resListHead;
                    }
                    else
                    {
                        curCur->next = new ListNode(list1->val);
                        curCur = curCur->next;
                    }
                    list1 = list1->next;
                }
                break;
            case 2:
                /* 2 is null */
                while (list2 != nullptr)
                {
                    if (curCur == nullptr)
                    {
                        resListHead = new ListNode(list2->val);
                        curCur = resListHead;
                    }
                    else
                    {
                        curCur->next = new ListNode(list2->val);
                        curCur = curCur->next;
                    }
                    list2 = list2->next;
                }
                break;
            case 3:
                /* both not null */
                if (list1->val <= list2->val)
                {
                    // create the node
                    if (curCur == nullptr)
                    {
                        resListHead = new ListNode(list1->val);
                        curCur = resListHead;
                    }
                    else
                    {
                        curCur->next = new ListNode(list1->val);
                        curCur = curCur->next;
                    }
                    list1 = list1->next;
                }
                else
                {
                    if (curCur == nullptr)
                    {
                        resListHead = new ListNode(list2->val);
                        curCur = resListHead;
                    }
                    else
                    {
                        curCur->next = new ListNode(list2->val);
                        curCur = curCur->next;
                    }
                    list2 = list2->next;
                }
                break;
            default:
                break;
            }

            // std::cout << "list1 val = " << list1->val << std::endl;
            // std::cout << "list2 val = " << list2->val << std::endl;
        }

        return resListHead;
    } //[]\n[0]
};