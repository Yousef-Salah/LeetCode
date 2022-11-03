// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "RomanNumber.h"
#include "RemoveDuplicatesfromSortedArray.h"
#include "MergeTwoSortedLists.h"
#include <vector>
using namespace std;

int main()
{
    //string str = "MCMXCIV";
    //RomanNumber number;
    //cout << number.romanToInt(str);

  /*  RemoveDuplicates x;
    
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);

    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    
    nums.push_back(2);
    nums.push_back(2);

    nums.push_back(3);
    nums.push_back(3);

    nums.push_back(4);

    cout << endl << x.removeDuplicates(nums) << endl << endl;
    
    for (auto i = nums.begin(); i < nums.end(); i++)
    {
        cout << *i << endl;
    }*/


    ListNode* list = new ListNode(1);
    list->next = new ListNode(2);
    list->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    Solution r;
    ListNode* result = r.mergeTwoLists(list, list2);


    while (result != nullptr) {
        cout << result->val << "\t";
        result = result->next;
    }

    return 0;

}

