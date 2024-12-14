#include<stdio.h>
#include<math.h>
main()
{
	double  f(double x);
	double  x1,x2,m,h,tol;
	int i;
	printf(" \n");
	printf("Enter the two points\n");
	scanf("%lf%lf",&x1,&x2);
	if(f(x1)*f(x2)>0)
		printf("there is no root in the interval\n");
	else if(f(x1)*f(x2)==0)
	{
		if(f(x1)==0)
			printf("Approximate root is =%lf\n",x1);
		else
			printf("Approximate root is =%lf\n",x2);
	}
	else
	{
		printf("Enter the tol\n");
		scanf("%lf",&tol);
		for(i=1;;++i)
		{
			h=fabs(x1-x2);
			if(h<tol)
				break;
			m=(x1+x2)/2.0;
			if(f(m)*f(x1)>0)
				x1=m;
			else
				x2=m;
		}
printf("An approximate root is=%lf\n",m);

	}
}
double f(double x)
{

	return(x*x*x+ 5*x*x-4*x +2);
}