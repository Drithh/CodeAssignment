#include<stdio.h>


#define MINIMUM2(num1, num2) num1 > num2 ? num2 : num1;

    

int main() {

    int in1,
        in2,
        min;

    scanf("%d %d", &in1, &in2);
    min = MINIMUM2(in1,in2);

    //printf("%d \n", min); 

    return 0;
}