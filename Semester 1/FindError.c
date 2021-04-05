
    /*
    printf( "%s\n", 'Happy Birthday' );
    
    Kata {Happy Birthday} seharusnya ditutup dengan kutip dua (" ")
    karena kutip satu (' ') hanya berfunsi untuk 1 character saja
    */
    printf( "%s\n", "Happy Birthday" );



    /*
    printf( "%c\n", 'Hello' );

    Kata {Hello} seharusnya ditutup dengan kutip dua (" ") karena ini merupakan gabungan bbrp character
    lalu %c diubah menjadi %s, karena ini string bukan character
    */
    printf( "%s\n", "Hello" );



    /*
    printf( "%c\n", "This is a string" );

    Walaupun tidak menimbulkan error saat di compile
    tetapi karena variabelnya berupa string, dan saat di specify itu menggunakan %c (yang fungsinya mengambil character)
    maka akan terjadi kesalahan saat mencetak output
    */
    printf( "%s\n", "This is a string" );



    /*     
    The following statement should print "Bon Voyage":
    printf( ""%s"", "Bon Voyage" );

    argumen pertama hanya perlu menggunakan 1 pasant kutip 2 saja
    lalu diargumen kedua barulah menambahkan bbrp karakter
    jika ingin mencetak tanda {"}, maka gunakan \" 
    agar tidak terjadi kebingungan saat dicompile 
    */
    printf("%s", "\"Bon Voyage\"");


    /* 
    char day[] = "Sunday";
    printf( "%s\n", day[ 3 ] );

    jika hanya ingin mencetak variabel day[3] saja
    gunakanlah %c karena itu hanya berisi 1 karakter saja 
    */
    printf( "%c\n", day[ 3 ] );



    /*     
    puts( 'Enter your name: ' );

    perintah itu salah, seharusnya menggunakan petik dua {"}
    */
    puts("Enter your name: ");

    /* 
    printf( %f, 123.456 );

    gunakan tanda petik {""} di parameter 1
    atau jika tidak ingin meggunakan tanda petik
    bisa menggunakan fungsi puts()
    */
    printf("%f", 123.456);

    /* 
    The following statement should print the characters 'O' and 'K':
    printf( "%s%s\n", 'O', 'K' );

    gunakan %c ketika bermain dengan 1 karakter saja.
    gunakan %s ketika bermain dengan lebih dari 1 karakter.
    */
    printf( "%c%c\n", 'O', 'K' );

    /*     
    char s[ 10 ];
    scanf( "%c", s[ 7 ] );
    karena ingin memasukan karakter
    gunakanlah, symbol {&} 
    */

    char s[ 10 ];
    scanf( "%c", &s[ 7 ] );    
