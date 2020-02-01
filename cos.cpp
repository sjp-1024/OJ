/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: cos.cpp
 &Created Time: 19Century 2019年07月23日 星期二 20时58分36秒   CST  Day/204 and Week/29 of this year
 ************************************************/

#include<stdio.h>
#include<math.h>

#define PI acos(-1) 
int main(){
	double x;
	scanf("%lf",&x);
	printf("%lf",PI/180.0*x);
	return 0;
}
