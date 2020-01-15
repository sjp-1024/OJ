#include <iostream>
#include <cstring>
using namespace std;
int main() {
 char name[10][20],temp[20];
    int i,j,m;
    for(i=0;i<10;i++)
        cin>>name[i];
    for(i=1;i<=9;i++){
        for(j=0;j<=9-i;j++){
            m=0;
            while(name[j][m]!='\0')
            if(name[j][m]>name[j+1][m]){
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
			/*	tem=name[j];
				name[j]=name[j+1];
				name[j+1]=tem;*/
                break;
            }
            else if(name[j][m]==name[j+1][m])
                m++;
            else if(name[j][m]<name[j+1][m])
                break;
        }
    }
    for(i=0;i<10;i++){
        cout<<name[i]<<endl;
    }
    return 0;
}
