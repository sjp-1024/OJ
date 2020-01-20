/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 284.cpp
        &Created Time: 19Century 2019年08月12日 星期一 19时39分20秒 
                           CST  Day/224 and Week/32 of this year
        &Description:
c++  排序

 ************************************************/


#include<iostream>
#include<cstdio>
#include<map>
#include<queue>
#include<set>
#include <algorithm>
using namespace std;
#define MAX_N 10000

struct Data{
	int p,d;
}arr[MAX_N+5];

bool cmp(const Data &a,const Data &b){
	return a.d<b.d;
}
typedef pair<int ,int >PII;
set<PII> s;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i].p>>arr[i].d;
	sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++){
		if(arr[i].d>s.size()){
			s.insert(PII(arr[i].p,i));
		}else if(arr[i].p>s.begin()->first){
		s.erase(s.begin());
		s.insert(PII(arr[i].p,i));
		}
	}
	int sum=0;
	for(auto iter=s.begin();iter!=s.end();iter++){
		sum+=iter->first;
		s.begin();
	}

	cout<<sum<<endl;
	return 0;
}
