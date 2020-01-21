/***********************************************************
*       &Author:     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 288-++.cpp
*       &Created Time: 19Century 2019年08月14日 星期三 18时24分54秒 
*                          CST  Day/226 and Week/32 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
 
using  namespace  std;
const int N=30010;
int  n,m; //n表示ADD操作次数，m表示get操作次数
int a[N],b[N];
 
int  main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int j=0;j<m;j++)cin>>b[j];
    sort(b,b+m);
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
    /*题解思想：通过维护大顶堆、小顶堆，完成这个模拟操作操作*/
    //b[m]数组暗含了add(x)和get两个操作
    int i=0,j=0;  //枚举操作确定索引变量
    //程序设计
    while(i<n || j<m)  //设计：一步一步操作
    {
      while(j<m && b[j]==i)
        {
           //get操作  在i个元素情况下，get的操作。
           cout<<right.top()<<endl;
           left.push(right.top());
           right.pop();
           j++;
            
        }
        //add操作分两种情况
        int x=a[i];
        if(left.empty()||x>=right.top()) right.push(x);
        else
        {
            left.push(x);
            right.push(left.top());
            left.pop();
        }
        i++;//i表示数组a的索引号
    }
    return 0;
}

