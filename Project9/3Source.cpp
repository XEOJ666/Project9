#include<stdio.h>
int main()
{
	int level;
	scanf_s("%d", &level);
	if (level < 0)
	{
		printf("Error");
	}
	for (int row = 0;row < level;row++)
	{
		for (int star = 1 + row;star > 0;star--)
		{
			printf("* ");
		}
		printf("\n");
	}
}