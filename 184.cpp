#include<iostream>
using namespace std;
 int main()
 {
	  int sum,i;
	  sum=1;
	  int n;
	  cin>>n;
	  for(i=n;i>1;i--)
	  sum=2*(sum+1);
    	printf("%d\n",sum);
	  return 0;
 }

