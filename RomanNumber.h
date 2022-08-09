#pragma once
#ifndef RomanNumberh

#define RomanNumberh



using namespace std;

class RomanNumber
{
private:
    
    char orders[7] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
    int values[7] = { 1, 5, 10, 50, 100, 500, 1000 };
    //TODO: Build it as cpp dictionary.

    bool isValidInput(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (findIndex(s[i]) == -1)
            {
                return false;
            }
        }

        return true;
    }

    bool isSubtracter(string s, int index)
    {
        if (findIndex(s[index]) < findIndex(s[index + 1]))
        {
            return true;
        }

        return false;
    }

    int findIndex(char ch)
    {
        for (int i = 0; i < 7; i++)
        {
            if (ch == orders[i]) {
                return i;
            }
        }

        return -1;
    }

public:
    int romanToInt(string s)
    {
        if (!isValidInput(s))
        {
            isValidInput(s);
            cout << "Invalid Input 0.";
            return 0;
        }

        int result = 0;
        int index = 0;
        bool subtract = false;

        for (int i = 0; i < s.length(); i++)
        {
            index = findIndex(s[i]);
            subtract = isSubtracter(s, i);
            if (index != -1)
            {
                if (!subtract) {
                    result += values[findIndex(s[i])];
                }
                else {
                    result -= values[findIndex(s[i])];
                }
            }
        }

        return result;
    }

};


// Problem Link => https://leetcode.com/problems/roman-to-integer/

#endif
