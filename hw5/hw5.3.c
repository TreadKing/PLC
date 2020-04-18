#include <stdio.h>
#include <time.h>
#define a_size 10000

int arr[a_size][a_size];
int *arrPtr = &arr[0][0];

void array_init();
double sub_count();
double point_count();

int main()
{
	array_init();
	clock_t time;
	time = clock();
	sub_count();
	time = clock() - time;
	double timeTakenSubscript = ((double) time) / CLOCKS_PER_SEC;
	time = clock();
	point_count();
	time = clock() - time;
	double timeTakenPointers = ((double) time) / CLOCKS_PER_SEC;
	printf("subscripting in %f seconds.\n", timeTakenSubscript);
	printf("pointers in %f seconds.", timeTakenPointers);
}

void array_init()
{
	for (int i = 0; i < a_size; i++)
	{
		for (int j = 0; j < a_size; j++)
		{
			arr[i][j] = j;
		}
	}
}

double sub_count()
{
	double count = 0;
	for (int i = 0; i < a_size; i++)
	{
		for (int j = 0; j < a_size; j++)
		{
			count += (double) arr[i][j];
		}
	}
	return count;
}

double point_count()
{
	double count = 0;
	for (int i = 0; i < a_size; i++)
	{
		for (int j = 0; j < a_size; j++)
		{
			count += (double) *(arrPtr + (i *a_size) + j);
		}
	}
	return count;
}