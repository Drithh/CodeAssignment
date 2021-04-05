#include<stdio.h>


#define PRINTARRAY(arrdef, panjang) \
for(int i = 0; i < panjang; i++) \
{\
    printf("%d ", arrdef[i]);\
}\
printf("\n");
    

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    PRINTARRAY(arr, 10);
    return 0;
}