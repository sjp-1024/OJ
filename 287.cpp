/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 287.cpp
 &Created Time: 19Century 2019年07月15日 星期一 15时37分28秒   CST  Day/196 and Week/28 of this year
 ************************************************/

int findDuplicate(int* nums,int numsSize){
    int p=nums[0],q=nums[0];
	do{
		p=nums[p];
		q=nums[nums[q]];
	}while(p!=q);
	q=nums[0];
	while(p!=q){
		p=nums[p];
		q=nums[q];
	}
	return p;
}
