#include <iostream>  
#include <climits>  
using namespace std;  
int IsUgly(int num)//判断是否是  
{  
    while (num %2 == 0)  
    {  
        num /= 2;  
    }  
    while (num %3 == 0)  
    {  
        num /= 3;  
    }  
    while (num %5 == 0)  
    {  
        num /= 5;  
    }  
    if (num == 1)  
        return 1;  
    else  
        return 0;//not an ugly number  
}  
int main()  
{  
    int n;  
    cin >> n ;
    for (int i = 1; i<= n; i++ ){
       if (IsUgly(i))
        cout << i << endl;
    }  
    return 0;  
}
