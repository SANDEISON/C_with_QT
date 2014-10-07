#include <stdio.h>

int main(void)
{

    printf("Logical Operators \n");

    if (5>3){
        printf(" 5 is greater 3\n");
    }

    if (2 < 3){
        printf(" 2 is lower 3  \n");
    }

    if (5 == 5){
        printf(" 5 is equal 5 \n");
    }

    if (5!=3){
        printf(" 5 is different 3 \n");
    }
    if (5>=3){
       printf(" 5 is greater or equal 3\n");
    }
    if (2<=3){
        printf(" 2 is less than or equal 3\n");
    }

    if ( (5>3) && (3>2) ){
        printf(" yes \n");
    }
    if ( (5>3) || (5<3) ){
        printf(" yes \n");
    }

    return 0;
}

