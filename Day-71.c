Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    
    char name[100];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error: Could not open or create info.txt.\n");
        return EXIT_FAILURE; 
    }

    printf("File created successfully! Data will be written to info.txt\n");

    printf("Enter your Name and Age (e.g., Rahul 23): ");
    
    if (scanf("%99s %d", name, &age) != 2) {
        printf("Input error. Please ensure you entered both a name and a numerical age.\n");
        fclose(fp);
        return EXIT_FAILURE;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
