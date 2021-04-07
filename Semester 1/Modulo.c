/*
Buatlah program untuk menampilkan hasil dari X^Y.

Input Format
Satu baris berisi X dan Y dipisahkan dengan spasi.

Constraints
0 ≤ X,Y ≤ 10^18

Output Format
Satu baris berisi hasil dari X^Y, karena hasil dapat terlalu besar 
keluarkan hasil dengan modulo 1000000007 (10^9+7).
*/

#include <stdio.h>
#define mod 1000000007

int main() {
    long long int nomor = 1, pangkat = 1, c = 1;

    scanf("%lli",&nomor);
    scanf("%lli",&pangkat);
    nomor %= mod;

    while (pangkat >= 1)
    {
        if (pangkat % 2)
        {
            c = (c * nomor) % mod;
        }
        pangkat /= 2;
        nomor = (nomor * nomor) % mod ;
    }
    printf("%lli\n",c);
}