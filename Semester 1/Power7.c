#include <stdio.h>
#include <math.h>

/*
Write a program that prints the powers of 7 for nonnegative numbers less than 4
You should use a repetition structure in your code.
*/


int main () {
    int num1; //Mendeclare Variable Untuk hasilnya nanti
    unsigned long long int hasil;
    printf("Berapa banyak angka yang ingin dioperasikan? "); // Meminta Input dari user
    scanf("%d",&num1); // Membaca Input

    for(int i = 0; i<=num1; i++) //Melakukan Loop Sampai variable i >= 4
    {
        hasil = pow(i,7); // Memangkatkan 7 variable i (0-num1)

        printf("%d^7 adalah %llu\n",i, hasil); // Mmeberikan Output hasil pemangkatan
    }    
    
}