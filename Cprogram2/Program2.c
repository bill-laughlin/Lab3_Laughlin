/*
 * Program2.c
 *
 *  Created on: Feb 8, 2023
 *      Author: w170l027
 */
#include <stdio>

void combinations(int n)
{
	int TD;
	int TDFG;
	int TD2pt;
	int FG;
	int safety;
	int ways = 0;

	printf("Possible combinations of scoring plays:\n");
	for(int i = 0; i < ways; i++)
	{

		printf("%d TD, %d TD + FG, %d TD + 2pt, %d 3pt FG, %d Safety", TD, TDFG, TD2pt, FG, safety);
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
