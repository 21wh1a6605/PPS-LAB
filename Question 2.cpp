#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,SI,CI;
	printf("enter three numbers",p,t,r);
	scanf("%f%f%f",&p,&t,&r);
	SI=(p*t*r)/100;
	printf("simple interest is %f",SI);
	CI=p*(pow(1+r/100,t)-p);
	printf("compound interest is %f",CI);
}
