#include <stdio.h>

int max = 100;

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int l, int m, int r)
{
    int i, j, k, B[100];

    i = l;
    j = m + 1;
    k = l;

    while (i <= m && j <= r)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= m)
    {
        B[k] = A[i];
        i++;
        k++;
    }

    while (j <= r)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for (i = l; i <= r; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int l, int r)
{
    int m;

    if (l < r)
    {
        m = (l + r) / 2;

        mergeSort(A, l, m);
        mergeSort(A, m + 1, r);

        merge(A, l, m, r);
    }
}

int main()
{
    printf("NAME:KOMAL PISUDDE\n");
    printf("ROLL NO: 20\n");
    printf("DEP: IT \n\n");

    int n, Arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &Arr[i]);
    }

    printf("\nBefore Sort:\n");
    printArray(Arr, n);

    mergeSort(Arr, 0, n - 1);

    printf("\nAfter Sort:\n");
    printArray(Arr, n);

    return 0;
}