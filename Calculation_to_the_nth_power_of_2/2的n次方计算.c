#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	int w = 0;
	int e = 1;
	scanf("%d", &q);
	if (q > 0)
	{
		for (w = 0; w < q; w++)
		{
			e *= 2;
		}
	}
	printf("%d\n", e);
	return 0;
}