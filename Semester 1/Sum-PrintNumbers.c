#include <stdio.h>
//Write a program that does the followings using loops:

int main()
{
    // Print the sum of the integers from 0 to 9


    int num1,hasil1 = 0; // Mendeclare Variable

    printf("Give me input number: "); // Meminta Input dari user
    scanf("%d", &num1); // Membaca Input

    for(int i = 0; i <= num1; i++)
    { 
        /*
        Melakukan Loop sampai i > variabel num1
        saat loop menambahkan variabel hasil1 dengan variabel i terus menerus
        */
        hasil1 += i;
    }


    printf("Sum of the integers within the range [0 , %d] is %d.", num1, hasil1); // Mengeluarkan Output Hasil


    printf("\n\n");


    // Print all integers from 1 to 5 line by line as shown below


    int num2,hasil2 = 0; // Mendeclare Variable

    printf("Give me input number: "); // Meminta Input dari user
    scanf("%d", &num2); // Membaca Input

    for(int i = 1; i <= num2 ; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            /*
            Melakukan Loop sampai j > i
            saat loop mengeluarkan output variabel i
            */
            printf("%d",i); 
        }
        puts(""); // Membuat Newline atau baris baru
    }

}
