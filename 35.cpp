/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 35.cpp
*       &Created Time: 20Century 2020年02月04日 星期二 15时24分44秒 
*                          CST  Day/035 and Week/05 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Solution {
    public:
    int searchInsert(vector<int>& nums, int target) {
        int min = 0;
        int end = sizeof(nums) - 1;
        while (min <= end) {
            int mid = (min + end) >> 1;
            if (nums[mid] == target) return mid;
            if (nums [mid] > target) end = mid - 1;
            else min =mid + 1;
        }
        //if (target <= nums[min]) return min;
        //else if (target <= nums[end]) return end;
        return 0;
    }
};
