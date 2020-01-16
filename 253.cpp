#include <iostream>
using namespace std;
int arr[10];
void a(int x,int n)
{
	if(x==n){
	  for(int i=0; i<n; i++)  
	    	printf("%d ",a[i]);
	        printf("%d\n",a[n-1]);
      return ;
		    }
    int f=1;	
	 for (int i = 1; i <= n; ++i) {
	    f=1;
	 for(int j=0; j<x; j++){
	      if(a[j]==i)  f=0;
                  }
	 if(f){
      a[x]=i;
      a(n,x+1);}
	   }
}
int main()
{
	    int n;
		scanf("%d",&n);
		fun(n,0);
		return 0;
}

