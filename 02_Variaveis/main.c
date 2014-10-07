#include <stdio.h>

int main(void)
{
    printf("variables!\n");

    int number;
    double number2 = 7.30 ;
    float number3 = 67.75f;
    int number4= -7;
    double number5 = -6.05;
    char characters = 'a' ;
    char text[11] = "Hello World";


    //  erro.
    printf("Number  : %d : \n",number);

    printf("Number2 : %lf : \n",number2);


    printf("Number3  : %f : \n",number3);

    printf("Number4  : %d : \n",number4);

    printf("Number5  : %lf : \n",number5);

    printf("characters : %c \n", characters);

    printf("Text       :  %s \n",text);


    return 0;
}

