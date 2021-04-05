#include <stdio.h> 


double TotalPenjumlahan(int i, int n, double total)  
{ 
    if (i > n )  // Base Case i > n
    {
        return 0; 
    }  
    else // Jika tidak, maka ke recursive casenya
    { 
        return (double)1 / (2 * i - 1) + TotalPenjumlahan(i + 1, n, total) ;
        /*

        Contoh Jika n = 2
        i = 1
            1 / 1 + TotalPenjumlahan(2, n, total)
                    TotalPenjumlahan(2, n, total) = 1 / 3 + Karen i sudah = n maka proses selesai

        lalu return
            1 / 1 +                                 1 / 3
            Maka hasilnya 1.333333
        */
    } 
} 
  
int main() 
{ 
       
    int n;
    scanf("%d", &n);

    float Total = TotalPenjumlahan(1, n, 0); 

    printf("%lf", Total); 

} 
   