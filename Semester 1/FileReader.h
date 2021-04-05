#pragma once

#define TEXTMAX 1024


#define OPENANDREAD(filename,fp,var)    \
do                                      \
{                                       \
    ASKFILENAME(var);                   \
    FILENAME(filename);                 \
    FREADMODE(filename,fp);             \
}                                       \
while(fp == NULL);


#define ASKFILENAME(var)                                                                    \
printf("\n%s\n%s%s\n%s\n%s%s%s",                                                            \
    "====================================================================================", \
    "Silahkan Masukan Nama File Yang ",var,                                                 \
    "Jangan lupa, jika extensi filenya bukan \".txt\" tulis extensi filenya juga :D",       \
    "Nama File ", var, " : ");      


#define FILENAME(filename)        \
scanf("%s", filename);            \
if(strrchr(filename,'.') == 0)    \
	strcat(filename, ".txt");      


#define FREADMODE(filename,file)                                                            \
file = fopen(filename, "r");                                                                \
if (file == NULL)                                                                           \
{                                                                                           \
    printf("%s%s%s\n%s%s%s\n%s\n%s\n",                                                      \
        "Mohon Maaf aku tidak bisa membaca ", filename  , " :(",                            \
        "Tolong Taruh File ", filename, " Di Direktori yang sama seperti ku",               \
        "Atau mungkin aku memang tidak bisa membacanya .-.",                                \
        "Silahkan Masukan Ulang Nama File yang ingin dibaca :)");                           \
}                                                                                           \
else                                                                                        \
{                                                                                           \
    printf("%s%s%s\n",                                                                      \
        "Baik File dengan nama ", filename  , " akan dibaca :)");                           \
}                                                                                           \
printf("%s\n",                                                                              \
    "====================================================================================");
                                                               


#define FREADLINE(texline, file)            \
memset(texline, 0, TEXTMAX);                \
if(feof(file) == 0)                         \
{                                           \
    fgets(texline, TEXTMAX, file);          \
}                                           \
else                                        \
    texline[0] = '\0';                      \
if (texline[strlen(texline) - 1] == '\n')   \
	texline[strlen(texline) - 1] = 0;

void printexit(void);




