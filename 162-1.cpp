/*************************************************
 &Author: 
 &Description:
 &File Name: 162-1.cpp
 &Created Time: 19Century 2019年06月23日 星期日 16时54分45秒   CST  Day/174 and Week/25 of this year
 ************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float s=1;
    float pi=0;
    float i=1.0;
    float n=1.0;
    while(fabs(i)>=1e-6){
        pi+=i;
        n=n+2;
        s=-s; 
        i=s/n;
    }
    pi=4*pi;
    printf("%.15f\n",pi);
    
    return 0;
}

