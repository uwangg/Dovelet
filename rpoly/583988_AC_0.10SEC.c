#include<math.h>
#define pi acos(-1.0)
main(){double r,n;scanf("%lf%lf",&r,&n);printf("%.3lf",0.5*r*r*n*sin(360/n*pi/180));}