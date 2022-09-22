//4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right.
//(For example, if array of size 5 is [32, 29, 40, 12, 70];
//n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )


#include <stdio.h>

void rotateArray(int arr[], int arrSize, int n, int d)
{
    int brr[arrSize];
    for (int i = 0; i < arrSize; i++)
        brr[i] = arr[i];
    if (d == 0) // for left
    {
        for (int i = 0, j = n; i < arrSize; i++)
            arr[i] = brr[j++ % arrSize];
    }
    else // for right
    {
        for (int i = 0, j = arrSize-n; i < arrSize; i++)
            arr[i] = brr[j++ % arrSize];
    }
}

int main()
{
    int arrSize, n, d;
    printf("How many number you want to enter: ");
    scanf("%d", &arrSize);
    int arr[arrSize];
    printf("Enter %d Element in Array\n", arrSize);
    for (int i = 0; i < arrSize; i++)
        scanf("%d", &arr[i]);

    printf("Enter Position and direction(if direction is left then enter 0 and for right enter 1: ");
    scanf("%d%d", &n, &d);

    printf("\nBefore Rotate Array: ");
    for (int i = 0; i < arrSize; i++)
        printf("%d ", arr[i]);

    rotateArray(arr, arrSize, n, d);

    printf("\nAfter Rotate Array by %d Position: ");
    for (int i = 0; i < arrSize; i++)
        printf("%d ", arr[i]);

    return 0;
}
