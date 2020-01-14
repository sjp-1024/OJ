/*************************************************
 &Author:     
 &E-mail: 878491983@qq.com
 &Motto: Believe in yourself.
 &File Name: 191.cpp
 &Created Time: 19Century 2019年08月08日 星期四 22时11分36秒   CST  Day/220 and Week/31 of this year
 &Description:

 ************************************************/


#include <iostream>
#include <cstdio>
using namespace std;
int a[8000005];
int main(){
    for(int i = 0;i < 8000005;i ++){
        a[i] = 1;
    }
    int l,r;
    cin>>l>>r;
    if(l == 1){//1不为质数
        l = 2;
    }
    for(int i = 2;i*i<=r;i ++){//质数筛选
        if(a[i]){
            for(int j = i * i;j <= r;j += i){
                a[j] = 0;
            }
        }
    }
    int flag = 0;//第一次判断时使用.
    int maxx = 0,minn = 0;
    int tempmaxx = 0,tempminn = 0;
    int maxpointx = 0,maxpointy = 0;
    int minpointx = 0,minpointy = 0;
    int temp = 0;
    for(int i = l;i <= r;i ++){
        while(!a[i]&&i<r){
            i ++;
        }
        if(a[i] == 1&&i <= r)
        tempminn = i;
        i++;
        while(!a[i]&&i<r){
            i++;
        }
        if(a[i] == 1&&i <= r)
        tempmaxx = i;
 
       // cout<<tempminn<<" "<<tempmaxx<<endl;
        if(tempmaxx - tempminn > maxx||!flag){
            flag = 1;
            maxx = tempmaxx - tempminn;
            maxpointx = tempminn;
            maxpointy = tempmaxx;
        }
 
        if((tempmaxx - tempminn < minn&&tempmaxx - tempminn > 0)||!flag||minn == 0){//需要判断 minn = 0的时候情况
            flag = 1;
            minn = tempmaxx - tempminn;
            minpointx = tempminn;
            minpointy = tempmaxx;
        }
        i --;//要考虑本次的第二个数和下一次第一个数的关系，将其作为第一个数
    }
    if(!minn||!maxx||minpointx == 0||minpointy == 0||maxpointx ==0||maxpointy == 0){
        cout<<"There are no adjacent primes."<<endl;
    }else{
        cout<<minpointx<<","<<minpointy<<" are closest, "<<maxpointx<<","<<maxpointy<<" are most distant."<<endl;
    }
 
    return 0;
}

