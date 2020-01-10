/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 145-1.cpp
 &Created Time: 19Century 2019年08月05日 星期一 19时28分03秒   CST  Day/217 and Week/31 of this year
 ************************************************/




#include<iostream>
#include<cstring>
using namespace std;
char c[101],str[101];
int maxlen;
int main(){

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c;
		if(maxlen<strlen(c)){
			maxlen=strlen(c);
			strcpy(str,c);
			}
		}
	cout<<str;
	return 0;
}

