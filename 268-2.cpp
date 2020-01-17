/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 268-2.cpp
*       &Created Time: 19Century 2019年09月03日 星期二 11时34分43秒 
*                          CST  Day/246 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
using namespace std;
#include<algorithm>
#include<queue>

#define MAX_N 1000
#define MAX_M 1000000 

queue<int >group_x[MAX_N+5];//小组
queue<int >team;//当前食堂正在排的队

int teamid[MAX_M+5];
int main(){
	int n;
	cin>>n;
	while(n){
		for(int i=0;i<n;i++){
			int cnt;
			cin>>cnt;
			while(cnt--){
				int x;
				cin>>x;
				teamid[x]=i;
			}
		}//dr
		string  command;

		while(cin>>command){
			if(command=="stop") return 0;
		
			if(command=="ENQUEUE"){
				int y;
				cin>>y;
				int tid=teamid[y];
				if(group_x[tid].empty())
					team.push(tid);
				group_x[tid].push(y);
			}
			if(command=="DEQUEUE"){
				int tid=team.front();//返回队中首队
				cout<<group_x[tid].front()<<endl;
				group_x[tid].pop();
				if(group_x[tid].empty()) 
					team.pop();
			}
		}
	}
	return 0;
}

