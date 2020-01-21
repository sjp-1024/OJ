/***********************************************************
*       &Author:     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 288.cpp
*       &Created Time: 19Century 2019年08月14日 星期三 18时10分38秒 
*                          CST  Day/226 and Week/32 of this year
*       &Description:
*       对顶堆的概念，通过维护序列数据的小顶堆和大顶堆（小根堆或大根堆），在这个维护的过程中，搜索的顺序要非常注意：
算法思路的步骤：
第一步：从数论的角度去审题，抽出其数据形式，关系，递推公式。
第二步：从数据结构的角度出发，设计出算法题解操作步骤，一般来说数据结构和操作具有耦合性（即算法结构与算法操作具有对应关系）。
第三步：从程序设计出发，实现程序。
算法搜索的顺序：不重不漏的枚举；状态变量的存储
***********************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include<set>
#include <cmath>
using namespace std;
#define MAX_N 30001
int val[MAX_N+5];


typedef pair<int,int> PII;
set<PII>s1,s2;

int main(){
	int n,m,i,j;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>val[i];
	for(int i=1,j=0;i<=m;i++){
		int k;
		cin>>k;
		while(j<k){
			++j;
			if(s1.size()==0 || -s1.begin()->first>val[j])
				s1.insert(PII(-val[j],j));
			else
				s2.insert(PII(val[j],j));
		
		}
		while(s1.size()>i){
				s2.insert(PII(-s1.begin()->first,s1.begin()->second));
				s1.erase(s1.begin());
}

    	while(s1.size()<i){
				s1.insert(PII(-s2.begin()->first,s2.begin()->second));
				s2.erase(s2.begin());
}
		cout<<-(s1.begin()->first)<<endl;
		}
return 0;
}



