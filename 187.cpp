/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 187.cpp
*       &Created Time: 20Century 2020年01月10日 星期五 22时57分24秒 
*                          CST  Day/010 and Week/01 of this year
*       &Description:
***********************************************************/


class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> res;
        unordered_set<int> st;
        int cur = 0;
        for (int i = 0; i < 9; ++i) cur = cur << 3 | (s[i] & 7);
        for (int i = 9; i < s.size(); ++i) {
            cur = ((cur & 0x7ffffff) << 3) | (s[i] & 7);
            if (st.count(cur)) res.insert(s.substr(i - 9, 10));
            else st.insert(cur);
        }
        return vector<string>(res.begin(), res.end());
    }
};

