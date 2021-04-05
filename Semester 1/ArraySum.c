#include <stdio.h>

//Declare variabel konstant
const int baris = 4; 
const int kolom = 3;

int SumArrayPertama(int num[kolom][baris])
{
    int total = 0;
    
    // Melakukan Pengulangan sampai i >= kolom dan menambahkan total dengan variable num[i][0]
    for(int i = 0; i < kolom; i++)
        total += num[i][0];

    // Mereturn total penjumlahan    
    return total;
}

int main()
{
    int num[kolom][baris]; //Declare variabel array 2D
    for(int i = 0; i < kolom; i++)
    {
        // Melakukan Pengulangan sampai j >= baris dan meminta input setiap satu kali putaran
        for(int j = 0; j < baris; j++)
        {
            printf("Enter number for [%d] [%d]:\t",i ,j);
            scanf("%d", &num[i][j]);
        }
    }
    
    // Mencetak output desimal yang isinya memanggil Fungsi SumArrayPertama dengan argumen num
    printf("%d" , SumArrayPertama(num));

    return 0;
}
