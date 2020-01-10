/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 143.cpp
        &Created Time: 19Century 2019年08月12日 星期一 10时35分52秒 
                           CST  Day/224 and Week/32 of this year
        &Description:
题目描述
​ 给定两个四位正整数 a,ba,b，找出这两个数之间（含）所有满足以下条件的数：

​ 1.这个四位数能被 66 整除；

​ 2.千位数字与百位数字构成的两位数 ABAB 是一个质数；

​ 3.十位数字与个位数字构成的两位数 CDCD 是一个完全平方数。

​ 完全平方数：可以写成另一个数的平方的数，比如 16(42),25(52)16(42),25(52)。

输入
​ 输入两个四位正整数 a,ba,b。（1000≤a≤b≤9999）（1000≤a≤b≤9999）
输出
​ 输出两行。

​ 第一行为从 aa 到 bb 之间所有满足条件的数，两个数字之间用空格隔开，最后一个数后没有空格。

​ 第二行为满足条件的数的个数 nn。

样例输入
2000 2350
样例输出
2304 2316
2

 ************************************************/

#include<iostream>
#include<math.h>
using namespace std;
inline bool is_prime(int n){
	if(n<1) return false;
	for(int i=2;i*i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int is_square(int a) {
    int b = sqrt(a);
    if(a == b * b) return 1;
    return 0;
}

int main(){
	int a,b,cnt=0;
	int i;
	int c,z,flag=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		c=i/100;
		z=i%100;
		if(is_prime(c)&& i%6==0 && is_square(z) ){
			cnt+=1;
			if(flag==0){
             	printf("%d",i);
				}else{
         		printf(" %d",i);
				}
			flag+=1;

		}
	}
	printf("\n");
	printf("%d",cnt);
	return 0;
}

