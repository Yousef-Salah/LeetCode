// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "RomanNumber.h"
#include "RemoveDuplicatesfromSortedArray.h"
#include <vector>
using namespace std;

int main()
{
    //string str = "MCMXCIV";
    //RomanNumber number;
    //cout << number.romanToInt(str);

    RemoveDuplicates x;
    
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
    }

}

