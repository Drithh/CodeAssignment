#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


//Define struct dengan typedef
typedef struct Pokemon
{
    char nama[100];
    char skill1[100];
    char skill2[100];
    char skill3[100];
}Pokemon;


//Deklarasi Fungsi
int guntingbatukertas(int punyauser, int punyaprogram);

int game(Pokemon* mypoke);

void crtcharacter(Pokemon* mypoke);

int BatasScan(int Atas, int Bawah);



int main()
{

    int userhub, pilihan = 0;

    //Lokal Struct Sebagai Default Profil Pokemon Pengguna
    Pokemon ProfilPokemon = { "Papa John's Pizza",
                            "Dual Layer Pepperoni",
                            "Spicy Chicken Ranch",
                            "Cheesy Chicken Cordong Bleu" };


    puts("================================\n=Selamat Datang Di Game MonMon!=\n================================");
    do
    {
        puts("\n==========Main Menu==========");
        puts("Pilih salah satu opsi dibawah:");
        puts("1. Buat Karakter");
        puts("2. Mulai Bertarung");
        puts("3. Keluar Dari Game");


        //Memanggil Fungsi untuk meminta Input Integer yang dibatasi
        userhub = BatasScan(1, 3);

        switch (userhub)
        {
        //Membuat Karakter
        case 1:
            crtcharacter(&ProfilPokemon);
            pilihan = 1;
            break;

        //Memulai Pertarungan
        case 2:
            puts("\n==========================================");
            if (pilihan == 0)
                puts("Karena Kamu Tidak Membuat Karakter Maka Menggunakan Karakter Default");

            puts("Berikut Profil Pokemon mu!");
            printf("Nama Pokemon  = %s\n", ProfilPokemon.nama);
            printf("Nama Ability1 = %s\n", ProfilPokemon.skill1);
            printf("Nama Ability2 = %s\n", ProfilPokemon.skill2);
            printf("Nama Ability3 = %s\n", ProfilPokemon.skill3);
            puts("==========================================\n");
            puts("\nMemulai Permainan...\n");

            //Memanggil Fungsi Game dengan argument bersi memmory address dari struct Pokemon ProfilPokemon
            game(&ProfilPokemon);
            break;

        //Keluar Dari Permainan
        case 3:
            puts("\nTerimakasih Telah Bermain, Sampai Jumpa Di Lain Waktu! :D");
            exit(0);
            break;
        }


    } while (1);
}


//Fungsi scanf dengan batas
int BatasScan(int bawah, int atas)
{
    int inpu, c;
    while (1)
    {
        //Meminta Input Ke Pengguna
        if (scanf("%d%*c", &inpu))
        {
            if (inpu <= atas && inpu >= bawah)
            {
                //Mereturn Hasil Input yang sudah dibaca, jika sesuai ketentuan
                return inpu; 
            }
            else
            {
                printf("Input Macam Apa Itu, Tolong Diulang\n");
            }
        }

        //Membersihkan Input Stream
        else
        {
            c = getchar();
            while (c != '\n' && c != EOF)
            {
                //Menghapus satu demi satu karakter sampai ketemu \n atau EOF
                c = getchar();
            }         
            printf("Input Macam Apa Itu, Tolong Diulang\n");
        }
    }
}


//Fungsi guntingbatukertas untuk menentukan siapa yang memenangkan permainan
int guntingbatukertas(int punyauser, int punyaprogram)
{
    //Ternary Operator, Jika punyauser = punyaprogram maka seri (0)
    //Yang kedua berarti itu artinya menang (1)
    //Jika tidak terjadi kedua kejadian diatas maka artinya kalah (2)
    
    return    punyauser == punyaprogram ? 0
        : punyauser == 1 && punyaprogram == 3 ||
        punyauser == 2 && punyaprogram == 1 ||
        punyauser == 3 && punyaprogram == 2 ? 1
        : 2;

}



//Untuk Merubah Member Struct ProfilPokemon di fungsi main
void crtcharacter(Pokemon* mypoke)
{
    puts("\n==========Membuat Kostum Karakter==========");
    puts("===========================================");

    printf("Apa Nama Pokemonmu yang kamu inginkan? ");
    scanf("%[^\n]", (*mypoke).nama);
    getchar();

    printf("Bagaimana dengan Ability Pertamanya? "); 
    scanf("%[^\n]", (*mypoke).skill1);
    getchar();

    printf("Bagaimana dengan Ability Keduanya? ");
    scanf("%[^\n]", (*mypoke).skill2);
    getchar();

    printf("Yang Terakhir, Bagaimana dengan Ability Ketiganya? "); 
    scanf("%[^\n]", (*mypoke).skill3);

    puts("===========================================\n");
}


int game(Pokemon* mypoke)
{
    //Lokal Struct Untuk Profil sebagai musuh dari Pengguna
    Pokemon Komputer = { "Domino's Pizza",
                        "Chicken Delight",
                        "Double Beef Burger",
                        "American Allstar" };

    int pilihanuser,
        pilihanprogram,
        hasiladu,
        userhealth = 100,
        programhealth = 100;

    puts("\n==========================================");
    printf("   %s VS %s\n", (*mypoke).nama, Komputer.nama);
    puts("==========================================\n");

    do
    {
        puts("Pilih Skill Ability mu");

        printf("1. %s\n", (*mypoke).skill1);
        printf("2. %s\n", (*mypoke).skill2);
        printf("3. %s\n", (*mypoke).skill3);
        puts("4. Kabur Dari Pertarungan");

        //Memanggil Fungsi untuk meminta Input Integer yang dibatasi
        pilihanuser = BatasScan(1, 4);

        puts("\n==========================================");
        //Mencetak Hasil Pilihan Dari Pengguna
        switch (pilihanuser)
        {
        case 1:
            printf("|Kamu|\t%s Menggunakan %s\n", (*mypoke).nama, (*mypoke).skill1);
            break;
        case 2:
            printf("|Kamu|\t%s Menggunakan %s\n", (*mypoke).nama, (*mypoke).skill2);
            break;
        case 3:
            printf("|Kamu|\t%s Menggunakan %s\n", (*mypoke).nama, (*mypoke).skill3);
            break;
        case 4:
            puts("Hahaha, Dasar Penakut, Sampai jumpa di lain waktu");
            puts("==========================================\n");
            return 0;
        }




        //Memilih angka random dari 1-3
        srand(time(NULL));
        pilihanprogram = (rand() % 3) + 1;
        printf("|Musuh|\t%s Menggunakan ", Komputer.nama);

        //Mencetak Hasil Pilihan Dari Program
        switch (pilihanprogram)
        {
        case 1:
            printf("%s\n", Komputer.skill1);
            break;
        case 2:
            printf("%s\n", Komputer.skill2);
            break;
        case 3:
            printf("%s\n", Komputer.skill3);
            break;
        }

        puts("==========================================\n");

        //Deklarasi string array
        char hasil[3][30] = { "Tidak Berasa Tapi Berasa",
                          "Membuat dia Mengompol!",
                          "Tidak Berasa Samsek :(" };

        //Memanggil Fungsi lalu disimpan di variabel hasiladu
        hasiladu = guntingbatukertas(pilihanuser, pilihanprogram);
        puts("\n==========================================");

        switch (hasiladu)
        {
        case 0:
            userhealth -= 15;
            programhealth -= 15;
            break;
        case 1:
            userhealth -= 5;
            programhealth -= 25;
            break;
        case 2:
            userhealth -= 25;
            programhealth -= 5;
            break;
        }


        //Ketika salah satu atau dua dari pemain mempunyai health atau darah kurang dari 1
        if (userhealth < 1 && programhealth < 1)
        {
            puts("KAMU SERI!!!");
            puts("Kau Merupakan Lawan yang tangguh, tapi akan kulahkan kamu lain waktu...");
            puts("==========================================\n");
            return 0;
        }
        else if (userhealth < 1)
        {
            puts("KAMU KALAH!!!");
            puts("Hahhaha, Kamu Kalah Dariku, Akulah yang paling Kuat...");
            puts("==========================================\n");
            return 0;
        }
        else if (programhealth < 1)
        {
            puts("KAMU MENANG!!!");
            puts("Uh oh, Bagaimana mungkin aku bisa kalah oleh seorang pemula...");
            puts("==========================================\n");
            return 0;
        }


        //Mencentak Sisa Health
        printf("Seranganmu %s\n\n", hasil[hasiladu]);
        printf("|Kamu|\t%s health = %d/100\n", (*mypoke).nama, userhealth);
        printf("|Musuh|\t%s health = %d/100\n", Komputer.nama, programhealth);
        puts("==========================================\n");

    } while (1);
}