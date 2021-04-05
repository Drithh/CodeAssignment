#include <stdio.h> 
  
int fibonacci(int a) //Fungsi untuk Fibonacci
{ 
    
    if (a == 0)  // Base Case a == 0
        return 0;
    else if (a == 1 || a == 2) // Base Case a == 1 atau a == 1
        return 1;
    else // Jika tidak, maka ke recursive casenya
        return (fibonacci(a - 1) + fibonacci(a - 2));

        /*
        Contoh saat a = 4
        Maka fibonacci(3) + fibonacci(2)
            Lalu (fibonacci(2) + fibonacci(1)) + 1
                Lalu (1 + 1) + 1
                    Jawabannya 3
        */
}

int main() 
{ 
    int angka; 
    scanf("%d", &angka);

    // Melakukan Pengulangan sampai i >= angka dan memanggil fungsi fibonacci setiap satu kali putaran
    for (int i = 0; i < angka; i++) { 
        printf("%d ", fibonacci(i)); 
    } 

    return 0; 
} 

