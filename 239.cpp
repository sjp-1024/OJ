#include<iostream>
using namespace std; 
#define long long lint;
void getXY(lint n,lint s,lint &x,lint &y){
	if(n==0){
		x=0,y=0;
		return;
	}
     int xx,yy;
	 int len_n_1 =(int )pow(2,n-1);
	 int total_n=len_n_1*len_n_1;
	 int ind1=s/total_n,ind2=s%total_n;
	 getXY(n-1,ind2,xx,yy);
	 switch(indl){
		 case 0:{
					x=yy,y=xx;}break;
		 case 1:{ 
					x=xx,y=yy+len_n_1;}break;
		 case 2:{
					x=xx+len_n_1,y=yy+len_n_1l;}break;
		 case 3:{
					x=2*len_n_1-yy-1,y-len_n_1 _xx-1;}break;
	 }
}
int main(){
	lint n,s,d;


    







	return 0;
}
