#include <stdlib.h>
#include "Header.h"


struct SameLine
{
	char    textline[TEXTMAX];
	int     line;
	int		dupe;
	struct  SameLine* next;
};


void instruction()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",                                                                     
		"Selamat Datang Di File Analyzer",                                                     
		"Fungsi Dari Program ini adalah untuk menghitung berapa banyak jumlah baris yang",     
		"memiliki kumpulan kata atau huruf yang identik atau sama dari 2 file yang diberikan",
		"Silahkan Pilih 2 Menu di bawah",
		"1. Membandingkan Kedua File",
		"2. Membandingkan Kedua File dengan Awalan Line yang berbeda",
		"3. Keluar dari program");
} 


int scanint()
{
    int inpu, c;
    while (1)
    {
        if (scanf("%d%*c", &inpu))
        {
            return inpu;
        }
        else
        {
            c = getchar();
            while (c != '\n' && c != EOF)
            {
                c = getchar();
            }         
            printf("Inputnya Jelek\n");
        }
    }
}


int setline(FILE *fp)
{

	printf("%s\n%s\n%s",
    	"====================================================================================",
		"Silahkan Masukan Angka dari Baris yang menjadi awalan",
		"Line : ");


    int userin,
		chr,
        curline = 1,
        curbyte = 0;

	do
	{
		userin = scanint();
		if(userin < 1) printf("\nInputnya Jelek\nLine : ");
	}while(userin < 1);
    
	
    do
    {
        if(chr == '\n') 
        {
            curline++;
            curbyte++;
        }
        if (curline == userin)
        {
            break;
        } 
        curbyte++;
    }while((chr=fgetc(fp)) != EOF);
    fseek(fp, curbyte, SEEK_SET);

	printf("%s\n",
    	"====================================================================================");
	return userin;
}


void strpush(struct SameLine** PtrHead,	char local_textline[], int local_line, int local_dupe)
{
	struct SameLine* new_SameLine = (struct SameLine*)malloc(sizeof(struct SameLine));
	struct SameLine* tail = *PtrHead;
	
	strcpy(new_SameLine->textline, local_textline);

	new_SameLine->line 		= local_line;
	new_SameLine->dupe 		= local_dupe;
	new_SameLine->next 		= NULL;


	if (*PtrHead == NULL)
	{
		*PtrHead 	= new_SameLine;
		return;
	}

	while (tail->next != NULL)
    {
        tail = tail->next;
    }	

	tail->next = new_SameLine;
}


int finddupe(struct SameLine* SameLine, char temptext[])
{	
	while (SameLine != NULL)
	{
		if(strcmp(temptext,SameLine->textline) == 0) 
		{
			return 1;
		}
		SameLine = SameLine->next;
	}
}


void printline(int max, char text, int maxstr)
{
	int i = maxstr >= 117 ? 117 : maxstr + 35 > max ? maxstr + 35 : max;
	while(i--)
	{
		printf("%c", text);
	}	
	printf("\n");
}


void printsuccess(struct SameLine* SameLine, char filename1[],int maxstr, int tfound, int dupe, int mty, int mode)
{
	printf("\n\n\n");

	printf("%s\n%s%d\n%s%d\n%s%d\n\n", 
		"Ini Hasil Analisis Untuk baris dengan huruf yang sama atau identik :D",
		"Baris yang sama : ", mode == 1 ? tfound - mty : mode == 2 ? tfound - dupe : mode == 3 ? tfound - dupe - mty : tfound,
		"String yang sama untuk kedua kalinya atau lebih : ", mode == 1 || mode == 0 ? dupe : 0,
		"dan String kosong pada baris yang sama : ", mode == 2 || mode == 0 ? mty : 0);


	printline(59, '=', maxstr);

	int padding = maxstr > 82 ? 82 - 18 : maxstr > 23 ? maxstr - 18 : 6;

	printf("%s%s%*s",
		"| Baris\t\t|" 			," Jumlah  \t| String atau Karakter"	, padding ,"|\n");
	printf("%s%s%s%s%*s",
		"| di ", filename1, " \t|"	," Karakter\t| dari Baris yang Sama"	, padding ,"|\n");

	printline(59, '-', maxstr);

	while (SameLine != NULL)
	{
		
		if((strlen(SameLine->textline) == 0 && mode == 1) || (SameLine->dupe == 1 && mode == 2) || ((strlen(SameLine->textline) == 0 || SameLine->dupe == 1) && mode == 3))
		{
			SameLine = SameLine->next;
			continue;
		}   

		printf("%s%d%s%d%s%c",
			"| " , SameLine->line , "\t\t| ", strlen(SameLine->textline) ,"\t\t|", ' ');

		padding = maxstr > 82 ? 83 - strlen(SameLine->textline) 
				: maxstr > 23 ? (maxstr + 1 - strlen(SameLine->textline)) 
				: (25 - strlen(SameLine->textline));

		if(strlen(SameLine->textline) < 81)
		{
            printf("%s%*s\n", SameLine->textline , padding , "|");
		}
		else
		{
			for(int i = 0; i < strlen(SameLine->textline); i += 80)
			{
				if(i != 0)
				{
					printf("|\t\t|\t\t| ");
				}		
				if(strlen(SameLine->textline) - i > 80)
				{
					printf("%.*s  |\n", 80, SameLine->textline + i);
				}
				else
				{
					printf("%s%*s\n", SameLine->textline + i , 83 - (strlen(SameLine->textline) - i) , "|");
				}
			}
		}

		SameLine = SameLine->next;
	}

	printline(59, '=', maxstr);
	printf("\n\n");

}


void printfail(char filename1[], char filename2[])
{
	printf("\n\n\n");

	printf("%s\n%s\n%s%s%s%s\n%s\n%s",
		"====================================================================================",                                                                     
		"Mohon Maaf sepertinya saya tidak dapat menemukan baris yang sama",                                                     
		"atau identik antara ", filename1, " dengan ", filename2,   
		"Mungkin anda bisa mencoba dengan memasukkan nama file yang lain :D",
		"====================================================================================");  

	printf("\n\n\n");
}


void printexit(void)
{
	printf("%s\n%s\n\n",
        "Terimkasih telah menggunakan program ini",
        "Sampai Jumpa Lagi");
}
