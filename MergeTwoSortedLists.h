#pragma once

#ifndef MergeTwoSortedLists
#define MergeTwoSortedLists

struct ListNode {
    int val;
    ListNode *next = nullptr;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
     


class Solution {
public:

    void addNode(ListNode* list, int value)
    {
        if (list != nullptr)
        {
            while (list->next != nullptr)
            {
                list = list->next;
            }
        }
        else {
            list = new ListNode(value);
            return;
        }

        list->next = new ListNode(value);
        list = list->next;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mergedHead = new ListNode(-1);
        ListNode* currentMerged = mergedHead;

        bool insertOnFirstList = false;

        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                this->addNode(mergedHead, list1->val);
                list1 = list1->next;
            }
            else if (list1->val > list2->val) {
                this->addNode(mergedHead, list2->val);
                list2 = list2->next;
            }
            else {

                if (insertOnFirstList) {
                    this->addNode(mergedHead, list1->val);
                    list1 = list1->next;
                }
                else {
                    this->addNode(mergedHead, list2->val);
                    list2 = list2->next;
                }

                insertOnFirstList = !insertOnFirstList;

            }

            currentMerged = currentMerged->next;
        }

        while (list1 != nullptr) {
            this->addNode(mergedHead, list1->val);
            list1 = list1->next;
        }

        while (list2 != nullptr) {
            this->addNode(mergedHead, list2->val);
            list2 = list2->next;
        }

        currentMerged = mergedHead;
        mergedHead = mergedHead->next;
        delete currentMerged;

        return mergedHead;
    }


};


#endif