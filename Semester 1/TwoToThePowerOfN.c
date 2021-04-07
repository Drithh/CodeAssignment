/*
Ufa merupakan mahasiswa semester 1 informatika, ia mengambil mata kuliah wajib 
sistem digital. Pada mata kuliah tersebut diajarkan bilangan biner. Ufa diberi 
tugas untuk mencari nilai dari 2^N, namun karena jawaban bisa terlalu besar tugas 
diringankan menjadi mencari nilai digit terakhir dari 2^N. Bantulah Ufa 
mengerjakan tugas tersebut dengan membuat program yang sesuai.

Input Format
Satu baris berisi N

Constraints
-10^18 ≤ N ≤ 10^18

Output Format
Satu baris berisi digit terakhir 2^N
*/

#include <stdio.h>
#include <math.h>

int main() {
    signed long long int num1, hasil, digitakhir;
    scanf("%lld", &num1);
    if(num1 == 0) {
        printf("1");
        return 0;
    }
    else if(num1 < 0) {
        printf("5");
        return 0;
    }
    num1 = (num1 % 4) + 4;
    hasil = pow(2, num1);
    digitakhir = hasil % 10;
    printf("%d", digitakhir);

}