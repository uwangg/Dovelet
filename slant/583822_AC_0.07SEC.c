#include <stdio.h>
#include <math.h>

int main()
{
	int x1,x2,y1,y2,a,b;

	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	a=abs(y2-y1)/abs(x2-x1);
	b=y1-(a*x1);
	printf("%d %d",a,b);
}