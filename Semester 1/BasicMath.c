#include <stdio.h>
#include <math.h>

/*
Write a program that reads two integers and calculates the following arithmetic
operations: addition, subtraction, multiplication, division and square root.
*/



int main() {

    double num1, num2; //Mendeclare Local Variable 
    int pilihan, putaran = 'Y';
    while(true)
    {
        printf("Please enter two integers: "); // Mengeluarkan Output Untuk Meminta Input
        scanf(" %lf", &num1); // Membaca Input
        scanf(" %lf", &num2); // Membaca Input

        puts("Please choose an operation:\n"); // Mengeluarkan Output Untuk Meminta Input
        puts("Press 1 for ADDITION");
        puts("Press 2 for SUBTRACTION");
        puts("Press 3 for MULTIPLICATION");
        puts("Press 4 for DIVISION");
        puts("Press 5 for SQUARE ROOT");
        puts("Press 6 for EXIT");

        scanf("%d", &pilihan); // Membaca Input
        switch (pilihan)
        {
        case 1:
            printf("The result is %g\n", num1 + num2);
            break;
        case 2:
            printf("The result is %g\n", num1 - num2);
            break;
        case 3:
            printf("The result is %g\n", num1 * num2);
            break;
        case 4:
            printf("The result is %g\n", num1 / num2);
            break;
        case 5:
            printf("The result is %g and %g\n", sqrt(num1), sqrt(num2));
            break;
        case 6:
            puts("Terimakasih Telah Bermain :D");
            return 1;
            break;
        default:
            puts("Wrong Input Please Try Again");
            break;
        }

    } 



}

