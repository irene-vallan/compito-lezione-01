#include <stdio.h>

int main()
{ printf("enter your name:  ");
char name[30];
scanf("%s", name);

printf("enter your surname:   ");
char surname[30];
scanf("%s", surname);

printf("welcome %s", name, surname);


    return 0;
}
