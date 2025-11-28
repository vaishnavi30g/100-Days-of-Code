Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[256];

    printf("What file do you want to read? (Enter filename): ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        printf("Sorry, there was an issue reading your input.\n");
        return 1;
    }
    
    filename[strcspn(filename, "\n")] = 0;

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Oops! I couldn't find the file named '%s'. Please check the name and try again.\n", filename);
        return 1; 
    } else {
        printf("Great! Here is the content of '%s':\n\n", filename);

        while (fgets(line, sizeof(line), fp) != NULL) {
            printf("%s", line);
        }
        
        printf("\n\nThat's all the content in the file. Have a nice day!\n");
        
        fclose(fp);
    }

    return 0;
}
