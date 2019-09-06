#include "pch.h"
#include <iostream>
using namespace std;

void swapp(int *xp, int *yp);				//swapping two indices in an array
void print_array(int arr[], int size);			
void selection_sort(int arr[], int size);		//apply selection sort algorithm
void bubble_sort(int arr[], int size);			//apply bubble sort algorithm


const int ARRAY_SIZE = 10;

int main()
{	
	int x[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)			//inserting random numbers to array
	{
		x[i] = (rand() % ARRAY_SIZE) + 1;
	}
	
	bubble_sort(x, ARRAY_SIZE);
	print_array(x, ARRAY_SIZE);
}

void swapp (int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selection_sort (int arr[], int size)
{
	int min = ARRAY_SIZE, min_index;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = i; j < ARRAY_SIZE; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				min_index = j;
			}
		}
		swapp(&arr[min_index], &arr[i]);
		min = ARRAY_SIZE;
	}
}
void bubble_sort (int arr[], int size)
{
	int counter = ARRAY_SIZE - 1;

	for (int i = 0; i < counter; counter--)
	{
		for (int j = 0; j < counter; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swapp(&arr[j], &arr[j + 1]);
			}
		}

	}
}
void print_array (int arr[], int size)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}


