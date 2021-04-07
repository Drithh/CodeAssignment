#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("%d", num1 >= num2 && num1 >= num3 ? num1 : num2 >= num3 && num2 >= num1 ? num2 : num3);
 
}
