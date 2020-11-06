#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int isSimple(int a)
{
int i;
for (i = 2; i <= a / 2; ++i)
{
if (a % i == 0)
return 0;
}
return 1;
}*/

int main()
{
	int a = 0, i;
	printf("Enter a: ");
	scanf("%d", &a);
	for (i = 1; i <= a / 2; ++i)
	{
		if (a % i == 0)//&& isSimple(i))
			printf("%d\n", i);
	}
	return 0;
}