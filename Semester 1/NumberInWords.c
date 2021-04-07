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
