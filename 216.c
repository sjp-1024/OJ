/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 216.c
 &Created Time: 19Century 2019年08月05日 星期一 16时51分51秒   CST  Day/217 and Week/31 of this year
 ************************************************/

#include<stdio.h>
#include<string.h>
char names[10][100];
int main(){
	int n,i,j,m;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
		scanf("%s",names[i]);
	for(int i=0;i<n;i++){
		m=i;
		for(int j=i+1;j<n;j++){
			if(strcmp(names[m],names[j])>0){
				m=j;
			}
		}
		char temp[100];
		strcpy(temp,names[i]);
		strcpy(names[i],names[m]);
		strcpy(names[m],temp);
	}
	for(int i=0;i<n;i++)
		printf("%s\n",names[i]);
	return 0;
}
