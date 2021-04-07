/*
Can't write the instruction just search it up 
in google with keyword same as the filename
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int num1, int num2, int num3) {
      return n == 1 ? num1 : n == 2 ? num2 : n == 3 ? num3 :
        find_nth_term(n-1, num1, num2, num3)+
        find_nth_term(n-2, num1, num2, num3)+
        find_nth_term(n-3, num1, num2, num3);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}