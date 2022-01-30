#include <stdio.h>

// 13220053 - Radithya Arisaputra
// file signature
// memeriksa apakah sebuah file .pdf atau .jpg atau bukan keduanya
// https://cboard.cprogramming.com/c-programming/171636-reading-hex-values-file.html

void main()
{
    char nama[] = "";
    printf("Masukkan nama file lengkap beserta ekstensinya\n");
    scanf("%[^\n]s",nama);
    int readhex[5];
    FILE *filename; filename = fopen(nama, "r");
    int c; int count = 0;

    while ( ( (c = fgetc(filename)) != EOF ) && count < 5) {
            readhex[count] = c;
            count++;
    };
    


    
    int i = 0;
    int pdfSignature[5] = {37, 80, 68, 70, 45};
    int jpgSignature[3] = {255, 216, 255};
    int isPDF = 1;
    int isJPG = 1;
    
    for(i=0;i<5;i++)
    {
        if (pdfSignature[i] != readhex[i])
        {
            isPDF=0;
        }
    }

    for(i=0;i<3;i++)
    {
        if (jpgSignature[i] != readhex[i])
        {
            isJPG=0;
        }
    }

    if(isPDF == 1)
    {
        printf("\nFile adalah PDF");
    }

    else if(isJPG == 1)
    {
        printf("\nFile adalah jpg");
    }

    else
    {
        printf("\nFile bukan PDF dan bukan jpg");
    }

    fclose(filename);
}
