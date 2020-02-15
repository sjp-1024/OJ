/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 35_1.cpp
*       &Created Time: 20Century 2020年02月04日 星期二 15时52分14秒 
*                          CST  Day/035 and Week/05 of this year
*       &Description:
***********************************************************/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int size = nums.size();
        if (size == 0) {
            return 0;
        }

        if (nums[size - 1] < target) {
            return size;
        }
        int left = 0;
        int right = size - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            // 严格小于 target 的元素一定不是解
            if (nums[mid] < target) {
                // 下一轮搜索区间是 [mid + 1, right]
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
};

