/*
 * Program2.c
 *
 *  Created on: Feb 8, 2023
 *      Author: w170l027
 */
#include <stdio.h>

void combinations(int n)
{
	if(n == 0 || n == 1)
	{
		return;
	}
	
	int total;
	printf("Possible combinations of scoring plays:\n");
	for(int i = 0; i <= n/8; i++)
	{
		for(int j = 0; j <= n/7; j++)
		{
			for(int k = 0; k <= n/6; k++)
			{
				for(int l = 0; l <= n/3; l++)
				{
					for(int m = 0; m <= n/2; m++)
					{
						total = (i * 8) + (j * 7) + (k * 6) + (l * 3) + (m * 2);
						if(total == n)
						{
							printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety", i, j, k, l, m);
							printf("\n");
						}
						else if(total > n)
						{
							break;
						}
					}
				}
			}
		}
	}
}

int main()
{
	int score = 2;
	while(score > 1)
	{
		printf("Enter 0 or 1 to STOP\n");
		printf("Enter the NFL score: ");
		scanf("%d", &score);
		combinations(score);
	}

	return(0);
}