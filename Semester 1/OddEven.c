/*
Budi mendapat tugas dari gurunya untuk mencari tahu manakah 
sebuah angka itu ganjil atau genap

Input Format
Satu baris berisi angka N

Constraints
0 <= N <= 30

Output Format
satu baris berisi kata "odd" untuk N bilangan ganjil 
dan "even" untuk N bilangan genap
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d", &a);
    printf("%s", a % 2 == 0 ? "even" : "odd");
    return 0;
}