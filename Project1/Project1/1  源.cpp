
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	int i=1;
	int n;
	int b=1;
	int sum=0;
	scanf("%d", &n);
	{
 		for (a = 1;a<=n;a++)
		{
			b = b * a;
			sum = sum + b;
		}
	}
	     printf("%d", sum);
		return 0;
}

	




 
