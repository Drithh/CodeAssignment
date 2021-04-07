/*
Adi merupakan asisten dosen pada mata kuliah konsep pemrograman. 
Untuk melakukan penilaian Adi memberi latihan soal menggunakan 
halaman web tertentu kepada N mahasiswa dengan nomor urut 1-N 
dalam batas waktu yang ditentukan. Adi ingin membuat laporan penilaian 
sesuai nomor urut mahasiswa, namun halaman web tersebut menampilkan
 hasil pekerjaan dengan urutan waktu pengerjaan. Buatlah program untuk membantu Adi!

Input Format
Baris pertama berisi bilangan N dimana N merupakan jumlah mahasiswa. 
N Baris berikutnya berisi bilangan i dan dan Xi dipisahkan dengan 
spasi dimana i merupakan nomor urut mahasiswa dan Xi merupakan nilai 
mahasiswa dengan nomor urut i.

Constraints
1 ≤ N ≤ 10^5 1 ≤ Xi ≤ 100

Output Format
N baris berisi nilai mahasiswa yang telah diurutkan berdasar nomor urut mahasiswa.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    
    scanf("%d", &n);

    int a,b,c[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        c[a] = b; 
    }
    
    for(int i = 1; i <= n; i++)
    {
        printf("%d\n", c[i]);
    }
        

}