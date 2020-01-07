/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 122.cpp
 &Created Time: 19Century 2019年07月09日 星期二 15时15分36秒   CST  Day/190 and Week/27 of this year
 ************************************************/
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	if(t<43200){
		printf("%02d:%02d:%02d am\n",t/3600,t%3600/60,t%60);
	}else if(t<43200+3600){
	    printf("%02d:%02d:%02d midnoon\n",t/3600,t%3600/60,t%60);
	
	}else{
		t-=43200;
       printf("%02d:%02d:%02d pm\n",t/3600,t%3600/60,t%60);
	}
	return 0;
}
