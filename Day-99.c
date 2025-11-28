Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nm[50];
    int rl;
    float mk;
} S;

int main() {
    S *p = (S *)malloc(sizeof(S));

    if (p == NULL) {
        printf("Oops! No memory left.\n");
        return 1;
    }

    strcpy(p->nm, "Tina");
    p->rl = 105;
    p->mk = 88.0f;

    printf("Sweet! Data saved dynamically.\n");
    printf("Name: %s | Roll: %d | Marks: %.0f\n", 
           p->nm, 
           p->rl, 
           p->mk);

    free(p);
    printf("Memory returned. Have a nice day!\n");

    return 0;
}
