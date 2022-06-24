#include <stdio.h>

#define N 100

int main()
{
	int arr[N]; // uninitialized
	int n;

	int target;
	int found = -1; // account for the case where the number wasn't in the array - NOT FOUND!

	printf("Enter number of elements in the array: ");
	scanf("%d", &n);

	// User-input for the array
	for(int i=0; i<n; i++)
		{
			printf("Enter element at index %d: ", i);
			scanf("%d", &arr[i]);
		}

	printf("Enter the element to search: ");
	scanf("%d", &target);

	// Array Traversal
	for(int i=0; i<n; i++)
		{
			if(arr[i] == target)
			{
				found = i;
				break;
			}
		}

	if (found == -1)
		printf("Target %d not in array!", target);
	else
		printf("Target %d found at index %d in array!", target, found);

	
	return 0;
}