#include <stdio.h>
#include <stdlib.h>


short linear_search(int* arr, int val, size_t arr_size)
{	
	for (int i = 0; i < arr_size; i++)
	{		
		if (arr[i] == val)
		{
			
			
			return 1;
		}
	}

	return 0;
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	short found = linear_search(arr, 7, sizeof(arr) / 4);

	if (found)
	{
		printf("Found 7");
	}
	else
	{
		printf("Couldn't find 7");
	}
}
