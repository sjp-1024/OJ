#include<iostream>
using namespace std;
  int main(){
  int n,i;
  double a[1000],sum=0;
       cin>>n;
   for(i=0;i<n;i++)
	   cin>>a[i];
   for(i=0;i<n;i++)
       sum+=a[i];
	   printf("%.2f",sum/n);
		   return 0;
  }
		   


