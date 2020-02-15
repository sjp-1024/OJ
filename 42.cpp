/***********************************************************
*       &Author:     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 42.cpp
*       &Created Time: 19Century 2019年08月14日 星期三 15时10分56秒 
*                          CST  Day/226 and Week/32 of this year
*       &Description:
*
*
***********************************************************/


int trap(int* height,int heightSize){
	int n=heigjtSize,ans=0,top=-1;
	int *stack=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		while(top !=-1 && height[stack[top]]<=height[i]){
		    if(top>=1)	{
				int w=i-stack[top-1]-1;
				int val1=height[i]-height[stack[top]];
				int val2=height[stack[top-1]]-height[stack[top]];
				int h=(val1<val2 ?val1:val2);
				ans+=h*w;
			}
			top--;
		}
		stack[++top]=i;

	}
	free(stack);
	return ans;
}

