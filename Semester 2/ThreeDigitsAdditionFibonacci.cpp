/*
Qia merupakan mahasiswa informatika uns. Suatu hari dosen 
memberikan dia tugas yang unik yaitu masalah fibonacci yang 
tidak biasa. Jika biasanya bilangan fibonacci merupakan penjumlahan 
dua angka sebelumnyanya, fibonacci yang tidak biasa ini merupakan 
penjumlahan tiga angka sebelumnya Bantulah ia menyelesaikan masalah 
tersebut. Note!!! masalah ini menggunakan index mulai dari 1

Input Format
Input berupa satu angka yaitu n
0 < n < 10^9

Constraints
Karena hasil yang sangat besar maka bilangan fibonaccinya di modulo 100000007

Output Format
Output berupa bilangan fibonacci yang tidak biasa ke n
*/

#include<bits/stdc++.h>

int FibThreeAdd(int n)
{
    if (n < 4) {
        return n == 3 ? 2 : 1;
    }
    int fibo[n-1];
    fibo[0] = 1, fibo[1] = 1, fibo[2] = 2;
    
    for (int i=3; i<n; ++i)
    {
        fibo[i] = ( (fibo[i-1] % 100000007) + (fibo[i-2] % 100000007) + (fibo[i-3] % 100000007) ) % 100000007;
        // std::cout << i << " [i-1] = " << fibo[i-1] << " [i-2] = " << fibo[i-2] << " [i-3] = " << fibo[i-3] << " sum " << fibo[i] << std::endl;
    }
    return fibo[n-1];
}
 
int main()
{
    int n; 
    std::cin >> n;
    std::cout << FibThreeAdd(n) << std::endl;
    return 0;
}