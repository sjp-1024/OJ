/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 1260.cpp
*       &Created Time: 20Century 2020年01月10日 星期五 22时55分27秒 
*                          CST  Day/010 and Week/01 of this year
*       &Description:
***********************************************************/


class Solution 
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> result(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) result[((i * m) + j + k) % (n * m) / m][((i * m) + j + k) % (n * m) % m] = grid[i][j];
        return result;
    }
};
