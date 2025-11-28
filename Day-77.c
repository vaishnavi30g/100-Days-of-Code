Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fpin = NULL;
    FILE *fpout = NULL;
    int c;
    
    fpin = fopen("input.txt", "r");
    if (fpin == NULL) {
        printf("ERR: input.txt not found.\n");
        return 1;
    }

    fpout = fopen("output.txt", "w");
    if (fpout == NULL) {
        printf("ERR: output.txt cannot be created.\n");
        fclose(fpin);
        return 1;
    }

    printf("Processing...\n");
    
    while ((c = fgetc(fpin)) != EOF) {
        int uc = toupper(c);
        fputc(uc, fpout);
    }
    
    if (fclose(fpin) != 0) {
        printf("Warning: Error closing input.\n");
    }
    if (fclose(fpout) != 0) {
        printf("Warning: Error closing output.\n");
    }

    printf("Done. Output saved to output.txt\n");

    return 0;
}
