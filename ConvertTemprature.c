#include <stdio.h>


void fahrenheitToCelcius (double *tempratur) 
{
    /*
    Fungsi Void yang merubah Fahrenheit Ke Celcius
    Karena fungsinya void, maka menggunakan Pointer karena fungsinya tidak mereturn apa-apa
    */

    *tempratur  = ((double) 5 / 9) * (*tempratur - 32);
}

void celsiusToFahrenheit (double *tempratur) 
{
    /*
    Fungsi Void yang merubah Celcius Ke Fahrenheit
    Karena fungsinya void, maka menggunakan Pointer karena fungsinya tidak mereturn apa-apa
    */

    *tempratur  = (( (double) 9 / 5) * (*tempratur)) + 32;
}



int main()
{
    double  tempratur;
    int     pilihan;

    scanf("%lf", &tempratur);

    askinput:
    puts("Mau Convert ke Celcius atau Fahrenheit? ");
    puts("1. Celcius");
    puts("2. Fahrenheit");

    scanf("%d", &pilihan);



    if(pilihan == 1) 
    {
        /*
        Jika User memberi input 1 (memilih convert ke celcius)
        maka akan memanggil fungsi fahrenheitToCelcius berisi argumen memory addressnya variable tempratur
        */

        fahrenheitToCelcius (&tempratur);
    }     
    else if (pilihan == 2)
    {
        /*
        Jika User memberi input 2 (memilih convert ke Fahrenheit)
        maka akan memanggil fungsi celsiusToFahrenheit berisi argumen memory addressnya variable tempratur
        */

        celsiusToFahrenheit (&tempratur);
    }
    else
    {
        /*
        Jika User tidak memberi input 1 atau 2
        Maka Mencetak "Input Salah", lalu pergi ke lebel askinput untuk meminta inputnya lagi
        */
        puts("Input Salah, Ulangi Lagi!");
        goto askinput;
    }



    // Mencetak Input Hasil Convert
    printf("%g", tempratur);
}
