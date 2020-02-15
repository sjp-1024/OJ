/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 4.cpp
*       &Created Time: 19Century 2019年08月19日 星期一 15时57分05秒 
*                          CST  Day/231 and Week/33 of this year
*       &Description:
*
*
***********************************************************/


double find(int *a, int *b, int n, int m, int k, int flag) {
    if (n == 0 && m == 0) return 0;//NULL
    if (n == 0 || m == 0) {
        if (m == 0) b = a;
        if (flag) return b[k - 1];
        return 1.0 * (b[k - 1] + b[k]) / 2.0;
    }
    if (k == 1) {
        int ret[2], t = 0;
        int p = 0, q = 0;
        while ((p < n || q < m) && t < 2) {
            if (q >= m || (p < n && a[p] <= b[q])) {
                ret[t++] = a[p++];
            } else {
                ret[t++] = b[q++];
            }
        }
        if (flag) return ret[0];
        return 1.0 * (ret[0] + ret[1]) / 2.0;
    }
    int ind_a = fmin(k >> 1, n);
    int ind_b = fmin(k - ind_a, m);
    ind_a = k - ind_b;
    if (ind_a > 0 && a[ind_a - 1] < b[ind_b - 1]) {
        return find(a + ind_a, b, n - ind_a, m, k - ind_a, flag);
    }
    return find(a, b + ind_b, n, m - ind_b, k - ind_b, flag);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
       int n = nums1Size + nums2Size;
    int k = (n + 1) >> 1;
    return find(nums1, nums2, nums1Size, nums2Size, k, n & 1);
}


