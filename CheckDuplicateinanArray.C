#include <stdio.h>

int main()
{
    int n, i, j, count = 0, testelement;

    // Declaring the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    // Reading input elements of the array
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Checking for duplicates
    for (i = 0; i < n; ++i)
    {
        testelement = arr[i];
        for (j = 0; j < i; ++j) // Fixed the loop condition
        {
            if (testelement == arr[j])
            {
                count += 1;
                break; // Added a break statement
            }
        }
    }

    // Printing result
    if (count > 0)
    {
        printf("Yes, the array contains duplicate elements\n");
    }
    else
    {
        printf("No, the array does not contain duplicate elements\n");
    }
    printf("%d",count);
    return 0;
}

//A better searching condition is//
/*int i, j, is_duplicate = 0;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                printf("Duplicate element found: %d\n", arr[i]);
            }
        }
    }

    if (!is_duplicate) {
        printf("No duplicates found.\n");
    }

    return 0;
}*/