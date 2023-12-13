#include <stdio.h>

int binarySearch(int *arr, int size, int target)
{
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return -1;
}

int main()
{
	int arr[] = {1, 3, 5, 6, 7, 9, 11, 13, 15};
	int n = sizeof(arr) / sizeof(arr[0]);

	int result = binarySearch(arr, n, 7);
	if (result != -1)
	{
		printf("Found element '%d' at index %d", arr[result], result);
	}

	return 0;
}