#include <stdio.h>
main()
{
	int n,s=0;
	long double a,re=1;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf",&a);
		re *= a;
	}
	while(re>=10)
	{
		re = re/10;
		s++;
	}
	printf("%.6f %d\n",re,s);
}