/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 172.cpp
*       &Created Time: 19Century 2019年08月19日 星期一 11时51分44秒 
*                          CST  Day/231 and Week/33 of this year
*       &Description:
*
*
***********************************************************/


#include<stdio.h>
#include<string.h>
char names[10][21];

int main(){
    int m,i,j;
    for(int i=0;i<10;i++)
    scanf("%s",names[i]);
    char temp[21];
    for(int i=0;i<10;i++){
        m=i;
        //printf("m1=%d\n",m);
        for(int j=i+1;j<10;j++){
            if(strcmp(names[m],names[j])>0){
                m=j;
                //printf("m2=%d\n",m);
            }
        }
        strcpy(temp,names[i]);
        strcpy(names[i],names[m]);
        strcpy(names[m],temp);
    }
    for(int i=0;i<10;++i){
        printf("%s\n",names[i]);
    }
    return 0;
}
