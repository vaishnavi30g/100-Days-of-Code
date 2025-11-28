Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nm[50];
    int rl;
    float mk;
} S;

void write_records(const char *fn) {
    FILE *f = fopen(fn, "w");
    if (f == NULL) {
        printf("Oops, couldn't make the file %s.\n", fn);
        return;
    }

    S arr[] = {
        {"Asha", 101, 85.0f},
        {"Ravi", 102, 92.5f},
        {"Priya", 103, 78.0f}
    };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Saving data to %s...\n", fn);
    
    for (int j = 0; j < n; j++) {
        fprintf(f, "%s %d %.2f\n", arr[j].nm, arr[j].rl, arr[j].mk);
        printf("Wrote: %s, %d, %.2f\n", arr[j].nm, arr[j].rl, arr[j].mk);
    }
    
    fclose(f);
    printf("All saved! :)\n\n");
}

void read_and_display_records(const char *fn) {
    FILE *f = fopen(fn, "r");
    if (f == NULL) {
        printf("Oh no, can't find %s to read.\n", fn);
        return;
    }

    S s;

    printf("Here's the student data from %s:\n", fn);
    
    int r = 0;
    while (fscanf(f, "%s %d %f", 
                  s.nm, 
                  &s.rl, 
                  &s.mk) == 3) {
        
        printf("Name: %-8s | Roll: %-4d | Score: %.2f\n", 
               s.nm, 
               s.rl, 
               s.mk);
        r++;
    }
    
    fclose(f);
    printf("\nFinished reading %d record(s).\n", r);
}


int main() {
    const char *dat = "student_records.txt";
    
    write_records(dat);
    read_and_display_records(dat);

    return 0;
}
