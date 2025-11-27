Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char line[256];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open info.txt for reading. Ensure the file exists.\n");
        return EXIT_FAILURE; 
    }
    
    while (fgets(line, 256, fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
