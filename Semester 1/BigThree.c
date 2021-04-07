/*
Diberikan 3 angka kepada vigo berturut-turut a,b, dan c. tugasnya adalah 
mencari angka terbesar diantara ketiganya dan mengeluarkannya

Input Format
Diberikan satu baris input berisi tiga buah angka a, b, c

Constraints
a, b, dan c merupakan bilangan bulat
-10^9<= a, b, c <= 10^9

Output Format
Keluarkan angka terbesar dari a,b, atau c
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("%d", num1 >= num2 && num1 >= num3 ? num1 : num2 >= num3 && num2 >= num1 ? num2 : num3);
 
}
