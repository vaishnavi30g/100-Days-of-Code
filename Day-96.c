Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/



#include <stdio.h>

typedef struct {
    int d;
    int m;
    int y;
} D;

typedef struct {
    char nm[50];
    int id;
    D jd;
} E;

int main() {
    E emp;
    
    // Set details
    printf("Setting up employee data...\n");
    
    // Employee data
    snprintf(emp.nm, 50, "Raj");
    emp.id = 11;
    
    // Joining Date (nested structure D)
    emp.jd.d = 12;
    emp.jd.m = 5;
    emp.jd.y = 2020;
    
    // Print details
    printf("\nHere is the employee's info:\n");
    printf("Name: %s | ID: %d | Joined: %02d/%02d/%d\n", 
           emp.nm, 
           emp.id, 
           emp.jd.d, 
           emp.jd.m, 
           emp.jd.y);
           
    printf("\nAll done! :)\n");

    return 0;
}
