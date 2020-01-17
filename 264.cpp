/* o(n) ----单调栈维护ｎ个元素　　每个循环ｏ(n)  3  O(n)
 　　维护单调递增
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
using namespace std;
#define MAX_N 100000

long long arr[MAX_N + 5];
long long l[MAX_N + 5], r[MAX_N + 5];

int main() {
    int n;

    stack<int> s;//声明了1个存储int型元素的栈，栈名是s。

    cin >> n;
    arr[0] = arr[n + 1] = -1;//添加收尾
    for (int i = 1; i <= n; i++) cin >> arr[i];
	//------------zuo
    s.push(0);
    for (int i = 1; i <= n; i++) {
        while (arr[s.top()] >= arr[i]) s.pop();
        l[i] = i - s.top();//zuoqie
        s.push(i);
    }
	//-------------qingkong zhan
    while (!s.empty()) s.pop();
	//------------you
    s.push(n + 1);
    for (int i = n; i >= 1; i--) {
        while (arr[s.top()] >= arr[i]) s.pop();
        r[i] = s.top() - i;//youqie
        s.push(i);
    }
//-----------
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, arr[i] * (r[i] + l[i] - 1));//  ====
    }
    cout << ans << endl;
    return 0;
}

