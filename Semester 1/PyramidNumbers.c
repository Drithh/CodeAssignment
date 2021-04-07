/*
Budi pergi ke mesir dan melihat sebuah piramida yang besar. 
Piramida itu terdiri dari beberapa tingkatan mulai dari tingkatan 
pertama yang paling rendah hingga tingkatan ke n yang paling tinggi. 
Budi kemudian memperoleh ide untuk menyusun piramidanya sendiri. 
Bantu budi menyusun piramida yang diinginkannya.

Input Format
Satu baris angka sebagai n

Constraints
1 <= n <= 100

Output Format
Bentuk piramida angka dengan bentuk dua dimensi dimana lapisan 
luar memiliki nilai 1 dan nilainya semakin ke dalam semakin besar. 
Pisahkan antar angka dalam satu baris dengan spasi
*/

#include <stdio.h>

int main() {

    int a, b,count = 1;
    scanf("%d", &a);

    b = a * 2;

    for (int i = 1; i < b; i++)
    {
        for (int j = 1; j < b; j++)
        {
            if (count > j) 
                printf("%d ", j);
            else if (b - count < j)
                printf("%d ", b - j);
            else
                printf("%d ", count);
        }
        count++;
        if (i >= a)
            count -= 2;
        puts("");
    }

}