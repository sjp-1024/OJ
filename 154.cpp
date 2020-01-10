/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 154.cpp
 &Created Time: 19Century 2019年07月02日 星期二 16时15分56秒   CST  Day/183 and Week/26 of this year
 ************************************************/
#include <stdio.h>
 
int main()
{
   int n,i,j;
   scanf("%d",&n);
 
   for(int i = n; i > 0; --i){
	   printf("%d",i);
       for(int j = i-1; j > 0; --j){
		   printf(" %d",j);
             
          // cout << setw(2) << j;
       }
	   printf("\n");
     //  cout << endl;
   }
 
    return 0;
}
