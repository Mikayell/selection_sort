#include <iostream>

void selection_sort(int* arr, int len);
int main()
{
	int arr[]{1234,47,85,38,9,645,23,78,34,79,23,8};
	selection_sort(arr, 12);
	for(int i : arr)
		std::cout << i << " ";
}

void selection_sort(int* arr, int len)
{
	int i, j, min;
	for(i = 0; i < len - 1; ++i)
	{
		min = i;
		for(j = i + 1; j < len; ++j)
		{
			if(arr[j] < arr[min])
				min = j;
		}
		std::swap(arr[i],arr[min]);
	}
}
