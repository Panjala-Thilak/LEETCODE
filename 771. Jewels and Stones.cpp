/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
*/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int sum=0;
        for(int i=0;i<J.length();i++)
        {
            sum=sum+count(S.begin(),S.end(),J[i]);
        }
        return sum;
        
    }
};
