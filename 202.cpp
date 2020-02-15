/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 202.cpp
 &Created Time: 19Century 2019年07月15日 星期一 18时09分24秒   CST  Day/196 and Week/28 of this year
 ************************************************/

int get_next(int x){
	int temp=0;
	while(x){
		temp+=(x%10)*(x%10);
		x/=10;
	}
	return temp;
}
bool isHappy(int n){
	int p=n,q=n;
	while(q!=1){
		p=get_next(p);
		q=get_next(get_next(q));
		if(p==q) break;
	}
	return (q==1);
}
