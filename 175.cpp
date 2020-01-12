/*************************************************
 &Author:     
 &E-mail: 878491983@qq.com
 &Motto: Believe in yourself.
 &File Name: 175.cpp
 &Created Time: 19Century 2019年08月08日 星期四 22时18分56秒   CST  Day/220 and Week/31 of this year
 &Description:

 ************************************************/


#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std; 
int main(){
	int F = 0;
	int N = 0;
    int N1 = 0;
	int you[4] = {0};
	cin>>N;
    N1 = N;
	while( (N--)>0 ){
		cin>>F;
		if( F>=90 ) you[0]++;
        else if (F>=80) you[1]++;
        else  if(F>=60) you[2]++;
	}
    cout<<"You "<<you[0]<<endl;
    cout<<"Liang "<<you[1]<<endl;
    cout<<"Zhong "<<you[2]<<endl;
    cout<<"Cha "<<N1-you[0]-you[1]-you[2]<<endl;
	return 0;
}

