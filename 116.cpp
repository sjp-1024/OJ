/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 116.cpp
 &Created Time: 19Century 2019年07月19日 星期五 19时38分15秒   CST  Day/200 and Week/28 of this year
 ************************************************/

#include <stdio.h>	
int main()
{
   int a, b, c, temp;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
		{
		temp = a;
		a = b;
	    b = temp;
		}
	if (a < c)
		{
	    temp = a;
		a = c;
		c = temp;
		}
	if (b < c)
		{
		temp = b;
		b = c;
		c = temp;
		}
	if (a <= 0 || b <= 0 || c <= 0 || b + c <= a)
		{
		printf("illegal triangle");
		return 0;
		}
	if ((a*a)>(b*b)+(c*c))
		{
		printf("obtuse triangle");
		return 0;
		}
	if ((a*a)<(b*b)+(c*c))
		{
		printf("acute triangle");
		return 0;
		}
	if (a*a == b*b + c*c)
		{
		printf("right triangle");
		return 0;
		}
return 0;
}

