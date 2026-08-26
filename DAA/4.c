#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int min, max;

    printf("Name: KOMAL PISUDDE | Roll No:20 | Sec: IT\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}