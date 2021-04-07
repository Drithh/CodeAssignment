/*
Budi sedang bersiap untuk belajar konsep pemrograman, namun dia kesulitan belajar
karena masih belum hafal angka-angka bahasa inggris. Bantulah budi belajar bahasa 
inggris untuk mempersiapkan hal tersebut

Input Format
Satu baris berisi sebuah angka N dimana N ini nanti akan diterjemahkan ke dalam
bahasa inggris

Constraints
1 <= N <= 9

Output Format
Satu baris berisi terjemahan angka N dalam lower case
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 char angka[9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
 int num,i;
 scanf("%d",&num);
 printf("%s",angka[num-1]);
}
