#include <stdio.h>

int main () {


    // Read an integer from keyboard and print out whether it is odd or even

    int anum=0; // Mendeclare Variable Buat Input

    printf("Please enter an integer: "); // Meminta Input
    scanf("%d", &anum); // Membaca Input

    printf("%d is %s\n",anum, anum % 2 == 0 ? "even" : "odd");
    /* 
    Menggunakan ternary operation jika variable anum habis dibagi 2 berarti 
    variable anum itu genap, lainnya sudah pasti variable anum itu ganjil

    lalu setelah itu diassign (Negative / Positive) ke  %s (String)
    */
    






    // Scan an integer from keyboard and print out whether it is positive or negative

    int bnum=0; // Mendeclare Variable Buat Input    

    printf("\nPlease enter an integer: "); // Meminta Input
    scanf("%d", &bnum); // Membaca Input

    printf("%d is %s\n",bnum, bnum < 0 ? "Negative" : "Postive");
    /* 
    Menggunakan ternary operation jika variable bnum lebih kecil dari 0 berarti 
    variable bnum itu Bilangan Negatif, lainnya sudah pasti variable bnum itu 
    Bilangan Positif.

    lalu setelah itu diassign (Negative / Positive) ke  %s (String)
    */







    // Read two integers from keyboard and print out the smaller one

    int num1,num2; // Mendeclare Variable Buat Input
    
    printf("\nPlease enter two integers: "); // Meminta Input
    scanf("%d%d", &num1,&num2); // Membaca Input

    printf("[%d and %d]\nSmaller one is %d\n",num1,num2, num1 < num2 ? num1 : num2);
    /* 
    Menggunakan ternary operation jika variable num1 lebih kecil dari variable num2 
    berarti akan memberi output bahwa variable num1 itu lebih kecil dari variable num2
    lainnya sudah pasti variable num2 lebih kecil dari num1. 

    (tidak ditentukan jika kedua variable sama, jadi mungkin akan sedikit rusak)
    */






   // Take two real numbers (double or float) from keyboard and print out the multiplication result of them

   float fnum1, fnum2; // Mendeclare Variable Buat Input

   printf("\nPlease enter two real numbers: "); // Meminta Input
   scanf("%f%f", &fnum1,&fnum2); // Membaca Input

   printf("Multiplication result is %g\n", fnum1 * fnum2);
    /* 
    Mengeluarkan output dengan mengkalikan fnum1 dengan fnum2 menggunakan %g
    agar bisa mengeluarkan output jenis float atau juga jenis integer

    (guna %g menghilangkan angka .000000 jika output integer. Karna output tersebut
    kurang diperlukan, dan juga sekaligus menambah kerapihan di bagian output)
    */
}