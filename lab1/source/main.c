#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7


int main()
{
	int f;
	int roll;
	int frequency[SIZE] = { 0 };
	 
	srand(time(NULL));

	for (roll = 1; roll <= 6000; roll++)
	{
		f=1+rand()%6;
		++frequency[f];
	}
	printf("%s%17s\n","Face","Frequency");
	for (f = 1; f < SIZE; f++)
	{
		printf("%4d%17d\n", f, frequency[f]);
	}
	system("pause");
	return 0;
}