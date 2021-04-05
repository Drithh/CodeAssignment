#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"
#include "Function.c"

int main()
{
    FILE    *fp1,
            *fp2;
            
    while(1)
    {
                
        char    fname1[100], 
                fname2[100];

        int     line        = 0,
                user        = 0,
                stringmax   = 0,
                totalfound  = 0,
                duplicate   = 0,
                empty       = 0,
                nextmenu    = 0,
                userin      = 1;


        atexit(printexit);
        
        instruction();
        do
        {
            user = scanint();
            switch (user)
            {
            case 1 ... 2:
                break;
            case 3:
                exit(EXIT_SUCCESS);
                break;
            default:
                printf("Inputnya Jelek\n");
                break;
            }
        }while(user < 1 || user > 3); 
         

        printf("\n\n");
        OPENANDREAD(fname1,fp1,"Pertama");
        if(user == 2) userin = setline(fp1);
        printf("\n\n");
        OPENANDREAD(fname2,fp2,"Kedua");
        if(user == 2) setline(fp2);

        line += userin - 1;

        struct SameLine* head = NULL;

        do   
        {
            char    temptext1[TEXTMAX], 
                    temptext2[TEXTMAX];

            int     indupe = 0;            

            line++;
            FREADLINE(temptext1, fp1);
            FREADLINE(temptext2, fp2);  
            if(strcmp(temptext1,temptext2) == 0)
            {

                totalfound++;
                if((int)strlen(temptext1) - 1 < 1)
                {
                    empty++;  
                } 
                else 
                {
                    indupe = (finddupe(head, temptext1));
                    duplicate += indupe;
                }

                strpush(&head, temptext1, line, indupe);
                stringmax = stringmax > strlen(temptext1) ? stringmax : strlen(temptext1);
            }      
        } while(feof(fp1) == 0 && feof(fp2) == 0);

        if(stringmax == 0)  
        {
            printfail(fname1,fname2);
        }
        else                
        {
            printsuccess(head, fname1, stringmax, totalfound, duplicate, empty, 0);
            
            printf("%s\n%s\n%s\n%s\n%s\n",
                "Mau Menghapus Baris Yang Kosong atau Baris Yang Terduplikat ?",
                "1. Baris Yang Kosong Saja",
                "2. Baris Yang Terduplikat Saja",
                "3. Keduanya",
                "4. Kembali ke Main Menu");

            do
            {
                nextmenu = scanint();
                switch (nextmenu)
                {
                case 1 ... 3:
                    printsuccess(head, fname1, stringmax, totalfound, duplicate, empty, nextmenu);
                    break;
                case 4:
                    break;
                default:
                    printf("Inputnya Jelek\n");
                    break;
                }
            }while(nextmenu < 1 || nextmenu > 4);
        }
        fclose(fp1);
        fclose(fp2);

        
        // system("pause");
        // printf("\e[1;1H\e[2J");
    }
         
}
