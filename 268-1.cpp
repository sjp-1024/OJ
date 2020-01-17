/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 268-1.cpp
*       &Created Time: 19Century 2019年09月03日 星期二 10时31分05秒 
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

queue<int >person[MAX_N+5];
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
		/*while(cin>>command,command!="stop"){
				if(command=="ENQUEUE"){
					int x;
					cin>>x;
					int tid=teamid[x];
					if(person[tid].empty()) team.push(tid);
					person[tid].push(x);
				}else{
					int tid=team.front();
					auto &q =person[tid];
					cout<<q.front()<<endl;
					q.pop();
					if(q.empty()) team.pop();

				}
		}*/
		while(cin>>command){
			if(command=="stop") break;
		
			if(command=="ENQUEUE"){
				int x;
				cin>>x;
				int tid=teamid[x];
				if(person[tid].empty()) team.push(tid);
				person[tid].push(x);
			}
			if(command=="DEQUEUE"){
				int tid=team.front();
				auto &q=person[tid];
				cout<<q.front()<<endl;
				q.pop();
				if(q.empty()) 
					team.pop();
			}
		}
		//cout<<endl;
	}
	return 0;
}
