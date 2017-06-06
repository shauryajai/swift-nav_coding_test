/*
 * test.c
 *
 *  Created on: Jun 5, 2017
 *      Author: shaur
 */

#include "test.h"

int is_prime(int number)
{
	int i = 0;

	if (number <= 1)
		return 0;

	if (number % 2 == 0 && number > 2)
		return 0;

	for(i = 3; i < number / 2; i+= 2)
	{
		if (number % i == 0)
			return 0;
	}

	return 1;
}

void print(int number)
{
	if(number == 0)
		printf("%d\n",number);
	else if(number % 15 == 0)
		printf("FizzBuzz\n");
	else if(number % 3 == 0)
		printf("Buzz\n");
	else if(number % 5 == 0)
		printf("Fizz\n");
	else if(is_prime(number))
		printf("BuzzFizz\n");
	else
		printf("%d\n",number);
}

int generate_fib(int n)
{
	int *arr = (int*)malloc(n*sizeof(int));
	int i;

	if(n < 2)
		return -1;

	arr[0] = 0;
	print(arr[0]);

	arr[1] = 1;
	print(arr[1]);

	for(i = 2; i < n; i++)
	{
		arr[i] = arr[i-2] + arr[i-1];
		print(arr[i]);
	}

	if(arr[i] < 0) // in case the number exceeds the maximum value of integer.
		return -1;

	free(arr);

	return 0;
}


