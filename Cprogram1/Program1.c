/*
 * Program1.c
 *
 *  Created on: Feb 8, 2023
 *      Author: w170l027
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function that prints out all data in tabular form
void list(double arr[12])
{
	printf("   Month     Sales\n");
	printf("January    $%.2f\n", arr[0]);
	printf("February   $%.2f\n", arr[1]);
	printf("March      $%.2f\n", arr[2]);
	printf("April      $%.2f\n", arr[3]);
	printf("May        $%.2f\n", arr[4]);
	printf("June       $%.2f\n", arr[5]);
	printf("July       $%.2f\n", arr[6]);
	printf("August     $%.2f\n", arr[7]);
	printf("September  $%.2f\n", arr[8]);
	printf("October    $%.2f\n", arr[9]);
	printf("November   $%.2f\n", arr[10]);
	printf("December   $%.2f", arr[11]);
}

//function that evaluates and stores stats, and then prints them
void stats(double arr[12])
{
	//declares variables to be used in function
	double max = arr[0];
	int maxIndex;
	double min = arr[0];
	int minIndex;
	double sum = 0;

	//for loop used to find min, max, their index so program knows which month they are from, and sums up all data at the same time
	for(int i = 0; i < 12; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			maxIndex = i;
		}
		if(arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
		sum = sum + arr[i];
	}
	//calculates average
	double average = sum/12.00;
	printf("\n");
	//Checks which month the Min sale is for and prints accordingly
	if(minIndex == 0)
		{
			printf("Minimum Sales:   $%.2f   (January)", min);
		}
	if(minIndex == 1)
		{
			printf("Minimum Sales:   $%.2f   (February)", min);
		}
	if(minIndex == 2)
		{
			printf("Minimum Sales:   $%.2f   (March)", min);
		}
	if(minIndex == 3)
		{
			printf("Minimum Sales:   $%.2f   (April)", min);
		}

	if(minIndex == 4)
		{
			printf("Minimum Sales:   $%.2f   (May)", min);
		}

	if(minIndex == 5)
		{
			printf("Minimum Sales:   $%.2f   (June)", min);
		}

	if(minIndex == 6)
		{
			printf("Minimum Sales:   $%.2f   (July)", min);
		}

	if(minIndex == 7)
		{
			printf("Minimum Sales:   $%.2f   (August)", min);
		}

	if(minIndex == 8)
		{
			printf("Minimum Sales:   $%.2f   (September)", min);
		}

	if(minIndex == 9)
		{
			printf("Minimum Sales:   $%.2f   (October)", min);
		}

	if(minIndex == 10)
		{
			printf("Minimum Sales:   $%.2f   (November)", min);
		}

	if(minIndex == 11)
		{
			printf("Minimum Sales:   $%.2f   (December)", min);
		}
	printf("\n");

	//checks which month the max sale is from and prints accordingly
	if(maxIndex == 0)
		{
			printf("Maximum Sales:   $%.2f   (January)", max);
		}
	if(maxIndex == 1)
		{
			printf("Maximum Sales:   $%.2f   (February)", max);
		}
	if(maxIndex == 2)
		{
			printf("Maximum Sales:   $%.2f   (March)", max);
		}
	if(maxIndex == 3)
		{
			printf("Maximum Sales:   $%.2f   (April)", max);
		}
	if(maxIndex == 4)
		{
			printf("Maximum Sales:   $%.2f   (May)", max);
		}
	if(maxIndex == 5)
		{
			printf("Maximum Sales:   $%.2f   (June)", max);
		}
	if(maxIndex == 6)
		{
			printf("Maximum Sales:   $%.2f   (July)", max);
		}
	if(maxIndex == 7)
		{
			printf("Maximum Sales:   $%.2f   (August)", max);
		}
	if(maxIndex == 8)
		{
			printf("Maximum Sales:   $%.2f   (September)", max);
		}
	if(maxIndex == 9)
		{
			printf("Maximum Sales:   $%.2f   (October)", max);
		}
	if(maxIndex == 10)
		{
			printf("Maximum Sales:   $%.2f   (November)", max);
		}
	if(maxIndex == 11)
		{
			printf("Maximum Sales:   $%.2f   (December)", max);
		}
	printf("\n");
	//prints average sale
	printf("Average sales:   $%.2f \n", average);

}

//function used to calculate and print the month average for each 6 month interval
void movingAverage(double arr[12])
{
	//declare variables to be used
	double average1;
	double average2;
	double average3;
	double average4;
	double average5;
	double average6;
	double average7;
	double sum1 = 0;
	double sum2 = 0;
	double sum3 = 0;
	double sum4 = 0;
	double sum5 = 0;
	double sum6 = 0;
	double sum7 = 0;

	//each for loop calculates the moving average for a single 6 month interval
	for(int i = 0; i < 6; i++)
		{
			sum1 = sum1 + arr[i];
		}
		average1 = sum1/6.00;

	for(int i = 1; i < 7; i++)
		{
			sum2 = sum2 + arr[i];
		}
		average2 = sum2/6.00;

	for(int i = 2; i < 8; i++)
		{
			sum3 = sum3 + arr[i];
		}
		average3 = sum3/6.00;

	for(int i = 3; i < 9; i++)
		{
			sum4 = sum4 + arr[i];
		}
		average4 = sum4/6.00;

	for(int i = 4; i < 10; i++)
		{
			sum5 = sum5 + arr[i];
		}
		average5 = sum5/6.00;

	for(int i = 5; i < 11; i++)
		{
			sum6 = sum6 + arr[i];
		}
		average6 = sum6/6.00;

	for(int i = 6; i < 12; i++)
		{
			sum7 = sum7 + arr[i];
		}
		average7 = sum7/6.00;

	//data found from for loops are printed to show moving averages
	printf("January    -   June         $%.2f \n", average1);
	printf("February   -   July         $%.2f \n", average2);
	printf("March      -   August       $%.2f \n", average3);
	printf("April      -   September    $%.2f \n", average4);
	printf("May        -   October      $%.2f \n", average5);
	printf("June       -   November     $%.2f \n", average6);
	printf("July       -   December     $%.2f \n", average7);
}

void sortSales(double arr[12])
{
	//declare array of indexes, array that will contain sorted data, and temp variable x used to help with sorting
	int indexes[12];
	double sorted[12];
	double x;

	//for loop that copies contents from arr into sorted
	for(int i = 0; i < 12; i++)
	{
		sorted[i] = arr[i];
	}
	//for loop to sort contents in sorted by comparing an entry with the next entry
	for(int i = 0; i < 12; i++)
	{
		for(int j = i + 1; j < 12; j++)
		{
			if(sorted[i] < sorted[j])
			{
				x = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = x;
			}
		}
	}
	//for loop to fill indexes with a number to represent the number of the month corresponding to the same index in sorted array
	for(int i = 0; i < 12; i++)
	{
		if(sorted[i] == arr[0])
		{
			indexes[i] = 1;
		}
		if(sorted[i] == arr[1])
		{
			indexes[i] = 2;
		}
		if(sorted[i] == arr[2])
		{
			indexes[i] = 3;
		}
		if(sorted[i] == arr[3])
		{
			indexes[i] = 4;
		}
		if(sorted[i] == arr[4])
		{
			indexes[i] = 5;
		}
		if(sorted[i] == arr[5])
		{
			indexes[i] = 6;
		}
		if(sorted[i] == arr[6])
		{
			indexes[i] = 7;
		}
		if(sorted[i] == arr[7])
		{
			indexes[i] = 8;
		}
		if(sorted[i] == arr[8])
		{
			indexes[i] = 9;
		}
		if(sorted[i] == arr[9])
		{
			indexes[i] = 10;
		}
		if(sorted[i] == arr[10])
		{
			indexes[i] = 11;
		}
		if(sorted[i] == arr[11])
		{
			indexes[i] = 12;
		}
	}
	//print sorted array, along with the names of the month, corresponding to each entry in indexes array
	printf("Sales Report(Highest to Lowest): \n  Month      Sales\n");
	for(int i = 0; i < 12; i++)
	{
		if(indexes[i] == 1)
		{
			printf("January     $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 2)
		{
			printf("February    $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 3)
		{
			printf("March       $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 4)
		{
			printf("April       $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 5)
		{
			printf("May         $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 6)
		{
			printf("June        $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 7)
		{
			printf("July        $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 8)
		{
			printf("August      $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 9)
		{
			printf("September   $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 10)
		{
			printf("October     $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 11)
		{
			printf("November    $%.2f \n", sorted[i]);
		}
		if(indexes[i] == 12)
		{
			printf("December    $%.2f \n", sorted[i]);
		}
	}
}

int main()
{
	//create a file and open it
	FILE* file;
	file = fopen("input.txt", "r");
	
	//check if file is opened
	if(NULL == file)
	{
		printf("File can not be opened!\n");
	}
	
	//declare array to be filled, iterator, and temp variable for file contents
	int i = 0;
	double num;
	double sales[12];
	
	//loop to fill array with file contents
	while(fscanf(file, "%lf", &num) > 0)
	{
		sales[i] = num;
		i++;
	}
	fclose(file);

	//call each function from above to print all data, print statistics of data, print moving average, and print a sorted list of all data
	list(sales);
	printf("\n");
	stats(sales);
	printf("\n");
	movingAverage(sales);
	printf("\n");
	sortSales(sales);
	printf("\n");


	return (0);
}
