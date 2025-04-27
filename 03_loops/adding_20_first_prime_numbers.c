#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // If divisible by any number other than 1 and itself, not prime
    }
    return true;
}

int main() {
    int count = 0; // Counter for the number of primes found
    int sum = 0;   // Variable to store the sum of primes
    int num = 2;   // Start checking from 2 (the first prime number)

    printf("The first 20 prime numbers are:\n");

    while (count < 20) {
        if (isPrime(num)) {
            sum += num; // Add the prime number to the sum
            printf("%d ", num); // Print the prime number
            count++; // Increment the prime count
        }
        num++; // Move to the next number
    }

    printf("\nThe sum of the first 20 prime numbers is: %d\n", sum);
    return 0;
}
