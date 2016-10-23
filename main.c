#include <stdio.h>
#include <stdlib.h>

int main()

{
    int numerator;
    int denominator;

    printf("hey baby! enter your numerator\n");
    scanf("%d",&numerator);

    printf("enter your denominator hottie!\n");
    scanf("%d",&denominator);

    printf("Quotient: %d\t Remainder: %d\n",numerator/denominator,numerator%denominator);
    return 0;
}
