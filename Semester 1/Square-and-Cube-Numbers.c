#include <stdio.h>

/*
Jika menggunakan devc++ dengan setting-an default harap menambah text 
"-std=c11" atau "-std=c99" tanpa tanda petik.
di tools, compiler options, lalu taruh di textbox bagian 
'add the following commands when calling the compiler'
dan jangan lupa dichecklist / dicentang bagian kotaknya
*/


int main(){

    int num; // Mendeclare Variable

    printf("Berapa banyak angka yang mau dioperasikan? "); // Meminta Input
    scanf("%d", &num); //Membaca Input

    puts("\nNumber\tSquare\tCube"); // Output Text Pemberi Informasi tentang Number,Square,Cube

    puts("-----------------------------"); // Output Text pembatas agar lebih rapih

    for(int i = 0; i<=num; i++) // Melakukan Loop Sampai Angka yang ditentukan
    {
        printf("%d\t%d\t%d\n", i ,  i*i  ,  i*i*i  );
        /*
        Melakukan Output berawal dari 

        i (tab) i*i atau i^2 (tab) i*i*i atau i^3 (newline)

        terus dilakukan sampai variable i > variable num
        */
    }

    puts("-----------------------------"); // Output Text pembatas agar lebih rapih

}
