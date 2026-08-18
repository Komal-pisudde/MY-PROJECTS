#include <stdio.h>

int main() {
    printf("Name: Komal Pisudde\n");
    printf("Roll No. 20\n");
    printf("Dep:IT\n\n");

    int num, a[100], lb, ub, mid, key;

    printf("Enter size of array:\t");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Enter number %d:\t", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter number to search:\t");
    scanf("%d", &key);

    lb = 0;
    ub = num - 1;
    mid = (lb + ub) / 2;

    while (lb <= ub) {
        if (a[mid] < key)
            lb = mid + 1;
        else if (a[mid] == key) {
            printf("\n%d found at position %d", key, mid + 1);
            break;
        }
        else
            ub = mid - 1;

        mid = (lb + ub) / 2;
    }

    if (lb > ub) {
        printf("Not found! %d isn't present in the list", key);
    }

    return 0;
}