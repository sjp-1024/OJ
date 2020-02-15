/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 268.cpp
 &Created Time: 19Century 2019年07月15日 星期一 16时04分01秒   CST  Day/196 and Week/28 of this year
 ************************************************/

int ans=0;n=numsSize+1;
//for(int i=0;i<=numSize;i++)ans^=i;
for(int i=0;j=2,i+=1;j*=2){
	int cnt=n/j*(j>>1);
	if(n%j>(j>>1)){
		cnt+=n%j-(j>>1);

	}
	if(cnt%2)ans!=(1<<i);
	if(j>=n)break;

}
for(int i=0;)

