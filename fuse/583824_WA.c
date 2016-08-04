#include <stdio.h>

int main()
{
	int com,pri,rou,result,a;
	
	scanf("%d %d %d",&com,&pri,&rou);

	result=5*com+4*pri+rou;
	result=result-result%10+10;
	printf("%d amperes\n",result);

	return 0;
}