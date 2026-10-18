#include <stdio.h>

int main()
{
    int i, j, k, n, m;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (k = 1; k <= 2 * (n - 1 - i); k++)
        {
            printf(" ");
        }

        m = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%4d", m);
            m = m * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
