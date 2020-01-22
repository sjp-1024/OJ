#include<iostream>
using namespace std;
#define MAX_N 10000
int main() {
    int n;
    char temp;
    scanf("%d",&n);
    int cnt = 0，nan = 0, nv = 0;
	long long int sum = 0;
	char i_num[MAX_N + 5][20] = {0};
    int q_num[MAX_N + 5] = {0};   
    for (int i = 0; i < n; i++) {
        scanf("%s",&temp);	
	   char *p=temp;
        if (*(p+1) == 'i') {
            if ((num[i][16] - '0') % 2 == 0) {
                nv ++;            
            } else {
                nan++;
            }
        }
        if (*(p+1) == 'q') {
            cnt += 1;
            sum += q_num[i];
        }
    }
	printf("%d %d %lld",nan,nv,sum/cnt);
    return 0;
}
