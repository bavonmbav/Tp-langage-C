 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
    printf("bonjour le monde vous allez bien");
    FILE *fp1;
    char ch;
    fp1 = fopen("programme.txt","r");// le deuxiem paramettre specifie le mode d'ouverture d'un fichier
    while (1)
    {
        ch = fgetc(fp1);// lit un caractere du fichier
        //fseek place  le pointeur du fichier a une position donnee
        //fputw ecrit un entier dans un fichier
        //fgetw lit un entier dans un fichier
        //ftell renvoie la position actuelle
        //rewind definit le pointeur de fichier au debut du fichier
        //fopen ouvre un fichier qui prend en paramettre un pointeur comme nom du fichier et une constante pointeur

        if(ch == EOF)
        break;
        printf("%c", ch);
    }
    fclose(fp1);


    FILE *fp2;
    fp2 = fopen("file.txt","w");
    fprintf(fp2,"bonjour le monde"); //ecrire dans un fichier en mode ecriture
    fclose(fp2);



FILE *fp3;
char caracter[255];

fp3 = fopen("file.txt", "r");
while (fscanf(fp3, "%s", caracter) != EOF)
{
    printf("%s", caracter);
}
   fclose(fp3);
        getch()// pour obtenir


//===============fputs=====

FILE *fp4;
fp4 = fopen("file.txt","w");
fputs("bonjour le langage c",fp4);
fclose(fp4);
getch();


//===============fgets=====

FILE *fp5;
char file[300];
fp5=fopen("file.txt","r");
printf("%s",fgets(file,200,fp5));
fclose(fp5);
getch();
//====================================


//=========================fseek====
/*
    il existe trois constantes qui sont utiliser pour la fonction fseek
    SEEK_SET,SEEK_CUR et SEEK_END
*/

    FILE *fp6;
    fp6 = fopen("file.txt", "w+");
    fputs("bonjour",fp6);

    fseek(fp6,20,SEEK_SET);
    fputs("ce ci est un tp",fp6);
    fclose(fp6);


//========rewind()====================

   
    FILE *fp7;
    char c;
    fp7 =fopen("file.txt","r");
    while ((c=fgetc(fp7)) != EOF)
    {
        printf("%c", c);
    }
    rewind(fp7);

    fclose(fp7);
    getch();


//===================ftell==============

    FILE *fp8;
    int tail;
    fp8 = fopen("file.txt", "r");
    fseek(fp8,0,SEEK_CUR);

    tail = ftell(fp8);
    fclose(fp8);
    printf("la taille du fichier est %d octets", tail);
    getch();

    return 0;
}

