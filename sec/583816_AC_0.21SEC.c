#include <stdio.h>

int main()
{
	int day,hour,time,second,sec;

	scanf("%d",&sec);

	day=sec/(24*60*60);
	hour=(sec%(24*60*60))/(60*60);
	time=(sec%(24*60*60))%(60*60)/60;
	second=(sec%(24*60*60))%(60*60)%60;

	printf("%d %d %d %d",day,hour,time,second);
	return 0;
}