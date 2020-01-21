/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 326食物链.cpp
*       &Created Time: 19Century 2019年08月23日 星期五 11时15分11秒 
*                          CST  Day/235 and Week/33 of this year
*       &Description:
*
*
***********************************************************/

#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

#define MAX_N 50000
 
struct Data{
	int fa,r;           
}arr[MAX_N+5];
 
struct UnionSet{
	void init(int n){
		int i;
		for(i=1;i<=n;i++){
			arr[i].fa=i;               
			arr[i].r=0;	
		}
	}
	int get(int x){       
		if(x==arr[x].fa)  return x;
		int tmp=arr[x].fa;               
		arr[x].fa=get(arr[x].fa);   
		arr[x].r=(arr[x].r+arr[tmp].r)%3; 
		return arr[x].fa;
	}
	void merge(int x,int y, int a, int b, int temp) {
		arr[b].fa=a;            
		arr[b].r=(3-arr[y].r+temp-1+arr[x].r)%3;
	}
};
UnionSet u;

int main(){
	int n,k,i,j;
	cin>>n>>k;
	int cnt=0, temp=0,a=0,b=0;
	u.init(n);
	while(k--){
		cin>>temp>>a>>b;
		if(a>n||b>n||(temp==2&&a==b)){
			cnt++;
			continue;
		}
		int t=u.get(a),t1=u.get(b);
		if(t!=t1)	u.merge(a,b,t,t1,temp);
		if(temp==1){
			if((3-arr[b].r+arr[a].r)%3!=0) cnt++;
		}else if (temp==2){
			if((3-arr[b].r+arr[a].r)%3!=2)  cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}

