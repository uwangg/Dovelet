#include <stdio.h>

int main()
{
	int com,pri,rou,result,a;
	
	scanf("%d %d %d",&com,&pri,&rou);

	result=5*com+4*pri+rou;
	a=result-result%10+10;
	printf("%d\n",a);

	return 0;
}