/*************************************************
 &Author: 
 &Description:
 &File Name: 162.cpp
 &Created Time: 19Century 2019年06月23日 星期日 16时44分47秒   CST  Day/174 and Week/25 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
    float term,result=1;
    int n;
    for(n=2;n<=100;n+=2){
        term=(float)(n*n)/((n-1)*(n+1));
        result*=term;
    }
    printf("%.15f\n", 2*result);
    
    return 0;
}
