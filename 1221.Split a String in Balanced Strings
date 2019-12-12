/*Balanced strings are those who have equal quantity of 'L' and 'R' characters.

Given a balanced string s split it in the maximum amount of balanced strings.

Return the maximum amount of splitted balanced strings.
Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.*/

class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,max=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
                count++;
            if(s[i]=='L')
                count--;
            if(count==0)
                max++;
        }
        return max;
    }
};
