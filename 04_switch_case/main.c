#include <stdio.h>

int main(void)
{
    int number = 1;

    switch (number){

    case 0:
        printf("Case 0!\n");
        break;
    case 1:
        printf("Case 1!\n");
        break;
    case 2:
        printf("Case 2!\n");
        break;
    case 3:
        printf("Case 3!\n");
        break;
     default:
        printf("Default !\n");
        break;
    }

    char X = 'a';

    switch (X){

    case 'a':
        printf("Case a!\n");
        break;
    case 'b':
        printf("Case b!\n");
        break;
    case 'c':
        printf("Case c!\n");
        break;
    case 'd':
        printf("Case d!\n");
        break;
     default:
        printf("Default !\n");
        break;
    }

    return 0;
}

