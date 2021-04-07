/*
Diberikan 3 bilangan N, X, Y. Buatlah program untuk menampilkan semua 
bilangan yang habis dibagi N (bilangan%N = 0) diantara X dan Y 
(X dan Y tidak termasuk).

Input Format
Satu baris yang berturut-turut berisi N, X, Y dipisahkan dengan spasi.

Constraints
1 ≤ N ≤ 10^18
0 ≤ X ≤ Y ≤ 10^5

Output Format
Beberapa baris dimana pada tiap baris berisi bilangan yang habis dibagi N.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long long num,a,b;
    scanf("%lli%lli%lli",&num,&a,&b);
    a += 1;
    for(int i = a; i < b; i++){
        if (i % num == 0)
            printf("%lli\n",i);
    }
}
