#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char book[20];
    char car[20];

    printf("Enter your favourite color: \n");
    scanf("%s", color);

    printf("Enter your favourite book: \n");
    scanf("%s", book);

    printf("Enter your favourite car: \n");
    scanf("%s", car);

    printf("My favourite color is %s\n", color);
    printf("My favourite book is %s\n", book);
    printf("My favourite car is %s\n", car);

    return 0;
}
