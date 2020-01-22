/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 464.cpp
        &Created Time: 19Century 2019年08月13日 星期二 21时57分19秒 
                           CST  Day/225 and Week/32 of this year
        &Description:


 ************************************************/


#include<iostream>
using namespace std;
int main(){
	int x,y;
	int i,cnt=0;
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(i%4==0&& i%100!=0 ||i%400==0){
			cnt+=1;
		}

	}
	cout<<cnt<<endl;
	return 0;
}
