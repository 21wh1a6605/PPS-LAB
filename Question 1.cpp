#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(b>c))
	{
		if (b>c)
		{
		printf("max=%d and min=%d",a,c);
		}
		else
		{
		printf("max=%d and min=%d",a,b);
		}	
	}
		else if ((b>a)&&(b>c))
		{
			if (a>c)
	{
		printf("max=%d anf min=%d",b,c);
	}
	else
	{
		printf("max=%d and min=%d",b,a);
	}
	}
	else
	{
		if (a>b)
		{printf("max=%d and min=%d",c,b);
		}
		else
		{
			printf("max=%d and min=%d",c,a);
		}
	}
		}
	
