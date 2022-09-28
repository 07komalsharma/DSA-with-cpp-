#include<stdio.h>
int sum_of_even_digits(int n) {
    int r, sum = 0;
    // reading each digit of n
    while (n > 0) {
        r = n % 10;    // storing rightmost digit of n in r
        n = n / 10;    // removing rightmost digit of n
        // if r is even, add r to sum
        if (r % 2 == 0){
            sum = sum + r;
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Sum of Even Digits: %d", sum_of_even_digits(n));
}