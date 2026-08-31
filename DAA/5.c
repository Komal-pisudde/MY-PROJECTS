#include <stdio.h>

struct Item
{
    int profit;
    int weight;
    float ratio;
};

int main()
{
    struct Item item[20], temp;
    int n, capacity, i, j;
    int currentWeight = 0;
    float totalProfit = 0.0;
    float fraction;

    printf("Enter number of items: ");
    scanf("%d", &n);

    // Input profit and weight
    for (i = 0; i < n; i++)
    {
        printf("Enter profit and weight of item %d: ", i + 1);
        scanf("%d %d", &item[i].profit, &item[i].weight);

        item[i].ratio =
            (float)item[i].profit / item[i].weight;
    }

    printf("Enter capacity of knapsack: ");
    scanf("%d", &capacity);

    // Sort items according to decreasing profit/weight ratio
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (item[i].ratio < item[j].ratio)
            {
                temp = item[i];
                item[i] = item[j];
                item[j] = temp;
            }
        }
    }

    // Select items
    for (i = 0; i < n; i++)
    {
        if (currentWeight + item[i].weight <= capacity)
        {
            currentWeight =
                currentWeight + item[i].weight;

            totalProfit =
                totalProfit + item[i].profit;
        }
        else
        {
            fraction =
                (float)(capacity - currentWeight)
                / item[i].weight;

            totalProfit =
                totalProfit + item[i].profit * fraction;

            currentWeight = capacity;
            break;
        }
    }

    printf("\nMaximum Profit = %.2f", totalProfit);

    return 0;
}