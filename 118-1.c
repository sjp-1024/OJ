#include<stdio.h>
int main()
{
	int year, t;
	scanf ("%d", &year);
	t = year%12;
	switch(t){
		case 0:
			printf ("monkey");break;
		case 1:
			printf ("rooster");break;
		case 2:
			printf ("dog");break;
		case 3:
			printf ("pig");break;
		case 4:
			printf ("rat");break;
		case 5:
			printf ("ox");break;
		case 6:
			printf ("tiger");break;
		case 7:
			printf ("rabbit");break;
		case 8:
			printf ("dragon");break;
		case 9:
			printf ("snake");break;
		case 10:
			printf ("horse");break;
		case 11:
			printf ("sheep");break;
	}
	return 0;
}
