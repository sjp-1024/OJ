
# include <stdio.h>
# include <string.h>

void replace(char * arr)
{
    int i, j, len, count;
    count = 0;
    len = strlen(arr);

    for (i=0; i<len; i++)
    {
        if (arr[i] == ' ')
        {
            count++; 
        }  
    }

    i = len;
    j = 2 * count + len; //每一个空格用三个字符替换，所以相当于每个空格多2个字符；
    scanf("%s\n", arr);

    while (i!=j && i>=0)
    {
        if (arr[i] == ' ')
        {
            arr[j--] = '0';
            arr[j--] = '2';
            arr[j--] = '%';
            i--;
        }
        else
        {
            arr[j] = arr[i]; //第一次替换的是字符串的结束符'\0'
            j--;
            i--; 
        }
    }
    printf("%s\n", arr);
}

int main(void)
{
    char str[100] ;
    //scanf("%s",str);
    replace(str);    

    return 0; 
}

