/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 268-1.cpp
 &Created Time: 19Century 2019年07月15日 星期一 16时41分50秒   CST  Day/196 and Week/28 of this year
 ************************************************/

for(int i=0;i<numsSize;i++){
	while(nums[i]!=i &&nums[i]!=numsSize){
		int a=nums[i],b=nums[nums[i]];
		nums[a]=a, nums[i]=b;
	}
}
for(int i=0;i<numsSize;i++){
	if(nums[i]-i) return i;
}
return numsSize;
}
