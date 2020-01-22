/***********************************************************
*       &Author: ShijinPeng     
*       &E-mail: 878491983@qq.com
*       &Motto: Believe in yourself.
*       &File Name: 456-1.cpp
*       &Created Time: 19Century 2019年08月17日 星期六 21时44分01秒 
*                          CST  Day/229 and Week/32 of this year
*       &Description:
*       输入
​ 第一行读入一个数N，它代表乔巴找到的筷子的根数。

​ 第二行是N个用空格隔开的数，代表筷子的长度。

输出
​ 一行，落单的筷子的长度。

样例输入
9
2 2 1 3 3 3 2 3 1
样例输出
2
***********************************************************/
#include <iostream>
 
using namespace std;
int kuaizi[1001];
int main()
{
    int n,num;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> num;
        kuaizi[num]++;
    }
    for(int i = 1;i <=1000;i++){
        if(kuaizi[i]%2) 
			cout << i<<endl;
    }
    return 0;
}
