#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            if ((i == 1 && (j == 1 || j == 7 || j == 11 || j == 19)) ||
                (i == 2 && (j == 3 || j == 5 || j == 7 || j == 9 ||
                            j == 11 || j == 13 || j == 15 || j == 17)) ||
                (i == 3 && (j == 4 || j == 8 || j == 14 || j == 18)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
