#include <stdio.h>

int main(void)
{
    int intN, intCounter, flag;
    unsigned long int ulngSum;
    char ch;
    do {
        do {
            flag = 0;
            printf("Enter a number (0 < N < 30000)\n");
            scanf("%d", &intN);
            if ( (intN <=0) || (intN > 30000) )
                flag = 1;
        } while ( flag );

        ulngSum = 0;

        for ( intCounter = 1; intCounter <= intN; intCounter++ ){
            ulngSum = ulngSum + intCounter;
        }

        printf("Required sum is: %lu\n", ulngSum);
        printf("Do you want to continue? (Y/N):\n");
        scanf(" %c", &ch);

    } while ( (ch == 'y') || (ch == 'Y') );

    printf("Thank you.\n");

    return 0;
}
