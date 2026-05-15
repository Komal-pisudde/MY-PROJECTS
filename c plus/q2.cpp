#include <stdio.h>

void func(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d , %d\n", i, j);
        }
    }
}

int main()
{
    func(3);   // yahan function call ho raha hai
    return 0;
}
