


#include <algorithm>

#include<iostream>
#include<queue>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
/*struct cmp{
	bool operator()(int a,int b){
		return a>b;
	}
}

priority_queue<int,vector<int>,cmp>q;
*/
priority_queue<int, vector<int>, greater<int>> q;

int main() {
    int n, a, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a, q.push(a);
    for (int i = 1; i < n; i++) {
        int val1 = q.top(); q.pop();
        int val2 = q.top(); q.pop();
        q.push(val1 + val2);
        sum += val1 + val2;
    }
    cout << sum << endl;
    return 0;
}
