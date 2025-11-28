//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum Color { 
    RED, 
    YELLOW, 
    GREEN,
    COLOR_COUNT 
};

typedef struct {
    char *n; 
    enum Color v; 
} E;

int main() {
    E a[COLOR_COUNT] = {
        {"RED", RED},
        {"YELLOW", YELLOW},
        {"GREEN", GREEN}
    };
    
    int i;
    
    printf("Fetching enum names and values...\n");

    for (i = 0; i < COLOR_COUNT; i++) {
        printf("%s = %d\n", a[i].n, a[i].v);
    }
    
    printf("\nFinished listing colors! :)\n");

    return 0;
}
