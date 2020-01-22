/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 333.cpp
*       &Created Time: 19Century 2019年08月24日 星期六 20时45分06秒 
*                          CST  Day/236 and Week/33 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
using namespace std;


#define MAX_N 500000
#define lc(ind) (tree[ind].lind)
#define rc(ind) (tree[ind].rind)
#define SUM(ind) tree[ind].sum
#define LMAX(ind) tree[ind].lm
#define RMAX(ind) tree[ind].rm
struct node{
	int sum,m,lm,rm;
	int lind,rind;
}tree[(MAX_N<<1)+5];

int root=0;cnt=1;

inline int getNode(){
	return cnt++;
}

void UP(int ind){
	SUM(ind) =SUM(lc(ind))+SUM(rc(ind));
	LMAX(ind)=max(LMAX(lc(ind)),SUM(lc(ind))+ LMAX(rc(ind)));
	RMAX(ind)=max(RMAX(rc(ind)),SUM(lc(ind))+RMAX(lc(ind)));

}


void UP(int a,int b,int c){
	
}

void build(int ind,int l,int r){
	if(l==r){
		SUM(int)=MAX(int )=LAMX(ind)=RMAX(ind)=arr[l];
		return ;
	}
	int mid=(l+r)>>1;
	lc(ind)=getNode();
	rc(ind)=getNode();
	build(rc(ind),l,mid);
	build(lc(ind),mid+1,r);
	UP(ind);
	return ;
}


void modify(int ind,int x,int y,int l,int r)
{
	if(l==r){
		SUM(ind)=MAX(ind)=LMAX(ind)=RMAX(ind)=y;
		return ;
	}
	int mid=(l+r)>>1;
	if(x<=mid) modify(lc(ind),x,y,l,mid);
	else modfy(rc(ind),)
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		build(root,1,n);
	}
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1){
			query(root,b,c,1,n);
			MAX(ans);
		}else{

		}
	}

	return 0;
}



