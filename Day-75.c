Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100] = "data.txt";
    char text_to_append[256];

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Could not open file '%s' in append mode.\n", filename);
        return EXIT_FAILURE; 
    }

    printf("File '%s' opened in append mode. Enter text to append (max 255 characters):\n", filename);
    
    if (fgets(text_to_append, sizeof(text_to_append), stdin) == NULL) {
        printf("Error reading user input.\n");
        fclose(fp);
        return EXIT_FAILURE;
    }
    
    if (fprintf(fp, "%s", text_to_append) < 0) {
        printf("Error writing to file '%s'.\n", filename);
        fclose(fp);
        return EXIT_FAILURE;
    }

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
