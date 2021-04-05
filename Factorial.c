#include <stdio.h>

// Write a program to compute the factorial of the given nonnegative integer.

int main () {

    unsigned long long int hasil=1; // Mendeclare Variable
    int num1; // Mendeclare Variable


    printf("Enter a nonnegative integer: "); // Meminta Input dari user
    scanf("%d",&num1); // Membaca Input


    for(int i = 1; i <= num1; i++) {
        /*
        Melakukan Loop sampai i > variabel num1
        saat loop mengalikan variabel hasil dengan variabel i terus menerus
        */
        hasil *= i;
    }

    printf("%d! = %llu", num1, hasil); // Mengeluarkan Output Hasil
}