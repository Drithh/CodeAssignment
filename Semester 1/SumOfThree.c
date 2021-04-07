/*
Budi diberi tugas oleh gurunya untuk menjumlahkan hasil perkalian 
kombinasi tiga buah bilangan dari tiga kumpulan bilangan. Banyaknya 
bilangan tiap bilangan sama yaitu sejumlah N .Karena hasilnya bisa 
sangat besar maka hasilnya nanti akan dimodulo 100000 . Bantulah budi 
untuk menyelesaikan tugas dari guru tersebut

Input Format
Baris bertama berisi 1 buah bilangan yaitu N. Baris kedua berisi N 
buah bilangan dengan nilainya masing-masing bilangan yaitu Ai

Constraints
1 < N ≤ 10^5
1 < Ai < 10^5

Output Format
Satu bilangan yang merupakan hasil dari kombinasi perkalian antar baris.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int a , n;
    unsigned long long sum = 1,tempsum = 0;

    scanf("%d", &n);

    for(int i = 0; i < 3; i++)
    { 
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a);
            tempsum += a;
        }   
        sum *= tempsum;
        sum %= 100000;
        tempsum = 0;
    }
    
    printf("%d", sum );
}