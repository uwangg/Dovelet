#include<stdio.h>
main(){
	int a[5]={0,},b[4][4]={461,431,420,0,130,160,118,0,100,57,70,0,167,266,75,0},i;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==1)
			a[4]=a[4]+b[i][0];
		else if(a[i]==2)
			a[4]=a[4]+b[i][1];
		else if(a[i]==3)
			a[4]=a[4]+b[i][2];
		else
			a[4]=a[4]+b[i][3];
	}printf("Your total Calorie count is %d.",a[4]);
}