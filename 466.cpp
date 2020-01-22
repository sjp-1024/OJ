/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 466.cpp
*       &Created Time: 19Century 2019年08月17日 星期六 20时14分08秒 
*                          CST  Day/229 and Week/32 of this year
*       &Description:
题目描述
​ 输入一个正整数n，求1~n之间的"回文数"的个数。

​ 回文数是指一个数倒过来和原数一样，如12121、11、1221、1是回文数。

输入
​ 一行一个正整数n，1 ≤ n ≤ 10000。

输出
​ 一行一个正整数，表示1~n之间回文数的个数，包括1和n。

样例输入
12
样例输出
10
***********************************************************/


#include <iostream>
using namespace std;
int is_valid(int x){
	int raw=x,temp=0;
	while(x){
		temp=temp*10+x%10;
		x/=10;
	}
return temp==raw;
}

int main(){
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(is_valid(i)){
			cnt+=1;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
