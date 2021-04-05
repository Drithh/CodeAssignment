#include <stdio.h>

/*
Write a program that reads a grade1 point and prints its letter grade1. 
(Implement two different versions of your program using the followings 
to decide about the letter grade1: switch-case, if-else.)
*/


int main () {

    // Using Switch

    int nilai1; // Mendeclare Variable Untuk Input
    char* grade1 = "None"; // Mendeclare Variable Nilai

    puts("(Using Switch Statement)\n");
    printf("Please enter your grade: "); // Meminta Input dari user
    scanf("%d",&nilai1); // Membaca Input

    switch (nilai1)
    {
    case 85 ... 100:
        grade1 = "A";
        break;
    case 80 ... 84:
        grade1 = "A-";
        break;
    case 75 ... 79:
        grade1 = "B+";
        break;
    case 70 ... 74:
        grade1 = "B";
        break;
    case 65 ... 69:
        grade1 = "C+";
        break;
    case 60 ... 64:
        grade1 = "C";
        break;
    case 56 ... 59:
        grade1 = "D";
        break;
    case 0 ... 55:
        grade1 = "E";
        break;
    default:
        puts("Wrong Input Please Re-Run the Program");
        return 0;
    }
    
    printf("Your letter grade is %s.",grade1); // Mengeluarkan Output Hasil


    // Using if-else Statement
    

    int nilai2; // Mendeclare Variable Untuk Input
    char* grade2 = "None"; // Mendeclare Variable Nilai

    puts("\n\n(Using if-else Statement)\n");
    printf("Please enter your grade: "); // Meminta Input dari user
    scanf("%d",&nilai2); // Membaca Input

    if(nilai2 >= 85 && nilai2 <= 100)  grade2 = "A"; 
    else if(nilai2 >= 80) grade2 = "A-"; 
    else if(nilai2 >= 75) grade2 = "B+"; 
    else if(nilai2 >= 70) grade2 = "B"; 
    else if(nilai2 >= 65) grade2 = "C+";
    else if(nilai2 >= 70) grade2 = "C"; 
    else if(nilai2 >= 56) grade2 = "D"; 
    else if(nilai2 >= 0 ) grade2 = "E"; 
    else 
    {
        puts("Wrong Input Please Re-Run the Program");
        return 0;
    }

    printf("Your letter grade is %s.",grade2); // Mengeluarkan Output Hasil

}
