#pragma once
#ifndef TwoSum

#define TwoSum

#include <vector>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> pair;
        auto fixed = nums.begin();       // fixed number
        auto var = nums.begin() + 1;     // Variable number
        int counter = 1;
        int offset = 1;

        while (var < nums.end())
        {
            if ((*fixed + *var) == target)
            {
                pair.push_back(fixed - nums.begin());
                pair.push_back(var - nums.begin());

                return pair;
            }

            var++;
            
            if (!(counter % (nums.size() -  offset)))
            {
                counter = 1;
                offset++;
                fixed++;
                var = fixed + 1;
            }
            counter++;
        }

        return pair;
    }
};
#endif