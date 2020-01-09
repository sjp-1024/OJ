#include<iostream>
using namespace std;
int main(){
	int n;
	int y,m,d;
	cin>>n;
	cin>>y>>m>>d;
	while(n){
		n--;
		int md;
		if((m<=7&&m%2==1)||(m>=8&&m%2==0)) md=31;
		else md=30;
		if(m==2)
			if((y%4==0 && y%100!=0)||y%400==0) md=29;
		else n=28;
	    if(d==md){
			d=1;
		    m++;
	             }
		else d++;
		if(m==13){
			m=1;
			y++;
		        }
	}
	cout<<y<<" "<<m<<" "<<d<<endl;
	return 0;
}
		 
