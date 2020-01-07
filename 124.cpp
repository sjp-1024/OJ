/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 124.cpp
        &Created Time: 19Century 2019年08月12日 星期一 21时32分10秒 
                           CST  Day/224 and Week/32 of this year
        &Description:


 ************************************************/


#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int xl,xp,year,work;
	cin>>xl>>xp>>year>>work;
	if((xl>=1 || xp<50) &&(year<=25 || work>=5)){
		printf("ok");
	}else{
		printf("pass");
	}

	return 0;
}
