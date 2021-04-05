#include <stdio.h>
#include <math.h>

int main ()
{
    int hex, 
        hour, 
        minute, 
        second;

    char string1[100];
    char string2[100];

    printf("%-15.8u\n",40000);                      //a

    scanf("%x",&hex);                               //b

    printf("%d\n",200);                             //c
    printf("%d\n",-200);

    printf("%#x\n",100);                            //d

    scanf("%[^p]s",string1);                        //e
    fflush(stdin);

    printf("%09.3f\n",1.234f);                      //f

    
    scanf("%d%*c%d%*c%d",&hour,&minute,&second);    //g
    fflush(stdin);
    
    scanf("\"%[^\"]", string2);                     //h
} 

