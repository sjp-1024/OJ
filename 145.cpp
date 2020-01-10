/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 145.cpp
 &Created Time: 19Century 2019年08月05日 星期一 18时33分31秒   CST  Day/217 and Week/31 of this year
 ************************************************/

#include<iostream>
#include<cstring>
int main(){
	int n,i;
	scanf("%d",&n);
	char name[20][100];
	char temp[100];
	for(int i=0;i<n;i++){
	scanf("%s",name[i]);
	}
	int maxlen;
	for(int i=0;i<n;i++){
		if(maxlen<strlen(name[i])){
		/*	strcpy(temp,name[i+1]);
			strcpy(name[i+1],name[i]);
			strcpy(name[i],temp);*/
			maxlen=strlen(name[i]);
			strcpy(temp,name[i]);
		}
	
	}
//	for(int i=0;i<n;i++)
//	printf("%s",name[0]);
printf("%s",temp);


	return 0;
}
