#include<iostream>
using namespace std;

#define MAX_N 729
char g[MAX_N+5][MAX_N+5];
void output (int n,int i,int j){
	if(n==1){
		g[i][j]='x';
		return ;
	}
	int l=(int)pow(3,n-2);
	output(n-1,i,j);
	output(n-1,i,j+2*l);	
	output(n-1,i+l,j+l);
	output(n-1,i,j*2,j);
	output(n-1,i*2,j+2*l);
return ;
}



	int main(){
   cin>>n;
   output(n,0,0);
   int l=(int)pow(3,n-1);
   for(int i=0;i<1;i++){0
	   for(int j+0;j<1;j++){
		   if(g[i][j]=='x') cout<<'x';
		   else cout <<" ";
	   }
	   cout <<endl;
   return 0;
	}




