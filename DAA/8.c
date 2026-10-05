#include <stdio.h>

// Utility function to find maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n, W;

    // Header details
    printf("Name: KOMAL PISUDDE \n");
    printf("Roll no: 20\n");

    // Input number of items and knapsack capacity
    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter knapsack capacity: ");
    scanf("%d", &W);

    int weight[n + 1], profit[n + 1];

    // Input weights
    printf("\nEnter weights:\n");
    for (int i = 1; i <= n; i++) {
        printf("Weight of item %d: ", i);
        scanf("%d", &weight[i]);
    }

    // Input profits / values
    printf("\nEnter Profit:\n");
    for (int i = 1; i <= n; i++) {
        printf("Value of item %d: ", i);
        scanf("%d", &profit[i]);
    }

    // Build DP table K[n+1][W+1]
    int K[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                K[i][w] = 0;
            } else if (weight[i] <= w) {
                K[i][w] = max(profit[i] + K[i - 1][w - weight[i]], K[i - 1][w]);
            } else {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    // Maximum profit
    printf("\nMaximum Profit = %d\n\n", K[n][W]);

    // Backtrack to find selected items (0 = not selected, 1 = selected)
    int selected[n + 1];
    for (int i = 1; i <= n; i++) {
        selected[i] = 0;
    }

    int res = K[n][W];
    int w = W;
    for (int i = n; i > 0 && res > 0; i--) {
        // If the value comes from K[i-1][w], item i was NOT included
        if (res == K[i - 1][w]) {
            continue;
        } else {
            // Item was included
            selected[i] = 1;
            res = res - profit[i];
            w = w - weight[i];
        }
    }

    // Display selected items
    printf("Selected Items:\n");
    for (int i = 1; i <= n; i++) {
        printf("Item %d = %d\n", i, selected[i]);
    }

    // Display 0/1 solution vector
    printf("\n0/1 Solution: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", selected[i]);
    }
    printf("\n");

    return 0;
}