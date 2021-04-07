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