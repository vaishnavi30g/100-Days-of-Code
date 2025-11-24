// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/


#include <stdio.h>

int main() {
    int n, sum = 0, odd = 1;

    printf("Enter the number of odd terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }

    printf("Sum of the first %d odd numbers is %d\n", n, sum);
    return 0;
}










// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/ 


#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);
    return 0;
}
