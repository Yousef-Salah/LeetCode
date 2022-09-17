#pragma once

#ifndef RemoveDuplicatesfromSortedArray
#define RemoveDuplicatesfromSortedArray
#include <iostream>
#include <vector>

using std::vector;

class RemoveDuplicates {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertIndex = 1;
        int vectorSize = nums.size();

        if (!vectorSize) {     // check if array is empty   
            return 0;
        }

        for (int i = 1; i < vectorSize; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[insertIndex] = nums[i];
                insertIndex++;
            }
        }

        return insertIndex;
    }    
};

#endif
