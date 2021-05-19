#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit = 0, input[101];
    printf("Limit?");
    scanf("%d", &limit);
    for (int counter = 0; counter < limit; counter++)
    {
        scanf("%d", &input[counter]);
    }
    for (int counter = 1; counter < limit; counter++)
    {
        int counter3 = counter;
        printf("Parse%d:\t", counter);
        for (int counter2 = counter; counter2 >= 0; counter2--)
        {
            if (input[counter3] < input[counter2])
            {
                int tmp = input[counter3];
                input[counter3] = input[counter2];
                input[counter2] = tmp;
                counter3 -= 1;
            }
        }
        for (int counter2 = 0; counter2 < limit; counter2++)
        {
            printf("%d ", input[counter2]);
        }
        printf("\n");
    }
    printf("Result:\t");
    for (int counter = 0; counter < limit; counter++)
    {
        printf("%d ", input[counter]);
    }
    return 0;
}
