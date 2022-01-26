#include<stdio.h>
int main()
{
	int phy,chem,math,avg,total;
	printf("enter three subject marks");
	scanf("%d%d%d",&phy,&chem,&math);
	total=(phy+math+chem);
	avg=(total/3);
	if(avg>=70)
	{
		printf("distinction");
	}
	else if(avg<=70&&avg>=60)
	{
		printf("grade A");
	}
	else if(avg<=60&&avg>=40)
	{
		printf("grad B");
	}
	else if(avg<=40)
	{
		printf("grade C");
	}
}
