/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 268.cpp
*       &Created Time: 19Century 2019年09月03日 星期二 09时28分34秒 
*                          CST  Day/246 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include <iostream>
#include <queue>
#include <string>
using namespace std;
#define MAX_N1000
#define MAX_M 1000000

queue<int> team[MAX_N]; 
queue<int> mainQueue;   
bool teamInQueue[MAX_N];  
int people[MAX_M]; 
int teamNums, Scenario=1;

void init(){
    for(int i = 0; i < teamNums; ++i){
        teamInQueue[i] = false;
        while(!team[i].empty())
            team[i].pop();
    }
    while(!mainQueue.empty())
        mainQueue.pop();
}

void input(){
    int totalPeopleInTeam,peopleID;
    for(int teamIndex = 0; teamIndex < teamNums; ++teamIndex)
    {
        cin >> totalPeopleInTeam;
        for(int j = 0; j < totalPeopleInTeam; ++j)
        {
            cin >> peopleID;
            people[peopleID] = teamIndex;
        }
    }
}
void solve()
{
    int peopleID,teamID;
    string command;
    cout << "Scenario #" << Scenario++ << endl;
    while(cin >> command && command[0] != 'S')  //STOP停止
    {
        if (command[0] == 'E')  //ENQUEUE入队
        {
            cin >> peopleID;  //输入ID后查询其组号teamID（即people[peopleID]）
            teamID = people[peopleID];
            if(teamInQueue[teamID]) //组号是否在大队列里呢(初始为false不在)
            {
                team[teamID].push(peopleID);  //找到我的组入组
            }
            else    //我组没人，我是第一个
            {
                teamInQueue[teamID] = true; //我们组终于有人了
                mainQueue.push(teamID);     //我们组的组号排在最后一组
                team[teamID].push(peopleID);  //找到我的组入组
            }
        }
        else   //DEQUEUE出队
        {
            if(!mainQueue.empty())  //大团组必须还有，如果无，则完全没人了
            {
                teamID = mainQueue.front();   //队头是哪个组的呀
                cout << team[teamID].front() << endl; //从相应的组里找到该组的头
                team[teamID].pop();  	 //打印了，出队
                if(team[teamID].empty())  //这个组空了，都出去了
                {
                    teamInQueue[teamID] = false;  //标记一下
                    mainQueue.pop();    //从大队里删除空组
                }
            }
        }
    }
    cout << endl;
}
int main()
{
    while(cin >> teamNums && teamNums)
    {
        init(); 	//初始化组的标记，及清空队列
        input();    //输入人员ID，记录人员组号
        solve();    //队列出队，入队操作
    }
    return 0;
}

