#include <stdio.h>

/* Write a program that reads the grades of “10” students and prints 
whether the students are passed the course or not. Your program should take a grade 
and then tell if it is honor [100-85],  satisfactory (85-60] or unsatisfactory (60-0]. 
It should also display the total numbers of the students in each category. */

int main () {

    char text[4][20] = {"honor","honor grade","satisfactory","unsatisfactory" }; // Mendeclare Variable Text, agar lebih jelas dan rapih nanti dalam penulisan code

    int tohonor = 0,tosatis = 0,tounsat = 0,nilai,students; // Mendeclare Variable


    printf("How many students in class? "); // Meminta Input dari user
    scanf("%d", &students); // Membaca Input

    printf("Please enter the grades of %d students:", students); 


    for(int i=0; i<students; i++) {

        scanf("%d",&nilai); // Membaca Input



        if(nilai >= 85 && nilai <= 100) 
        {
            printf("%d is %s.\n", nilai, text[1]);
            tohonor++;
        }
        else if(nilai >= 60 && nilai < 85) 
        {
            printf("%d is %s.\n", nilai, text[2]);
            tosatis++;
        }
        else if(nilai >= 0 && nilai < 60) 
        {
            printf("%d is %s.\n", nilai, text[3]);
            tounsat++;
        }
        else if(nilai < 0) // Jika Nilai Negatif maka program selesai
        {
            puts("Terimakasih Telah Bermain :D");
            return 0;
        }
        else  // Jika  input salah dan akan mengulang loop
        {
            puts("Error Input Please Try Again");
            puts("If You want to stop the proccess put negative numbers");
            i--;
        }
    }

    puts("\n");
    
    // Memberikan output dari semua hasil yang tadi sudah user berikan
    printf("Total number of %s students: %d\n", text[0] , tohonor );
    printf("Total number of %s students: %d\n", text[2] , tosatis );
    printf("Total number of %s students: %d\n", text[3] , tounsat );

    
}
