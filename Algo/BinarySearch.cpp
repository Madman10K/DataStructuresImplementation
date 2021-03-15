#include <stdio.h>
#include <stdlib.h>

int binary_search(int* arr, int value, size_t arr_size)
{
    int l = 0;
    arr_size = arr_size - 1;

    while (l <= arr_size)
    {
        int mid = (l + arr_size) / 2;

        printf("%d \n", arr[mid]);

        if (arr[mid] < value)
        {
            l = mid + 1;
        }
        else if (arr[mid] > value)
        {
            arr_size = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printf("%d", binary_search(arr, 7, sizeof(arr) / 4));
}