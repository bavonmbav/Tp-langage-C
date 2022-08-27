 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

// /*
// int main(void)
// {
//     // printf("bonjour le monde vous allez bien");
//     // FILE *fp;
//     // char ch;
//     // fp = fopen("programme.txt","r");// le deuxiem paramettre specifie le mode d'ouverture d'un fichier
//     // while (1)
//     // {
//     //     ch = fgetc(fp);// lit un caractere du fichier
//     //     //fseek place  le pointeur du fichier a une position donnee
//     //     //fputw ecrit un entier dans un fichier
//     //     //fgetw lit un entier dans un fichier
//     //     //ftell renvoie la position actuelle
//     //     //rewind definit le pointeur de fichier au debut du fichier
//     //     //fopen ouvre un fichier qui prend en paramettre un pointeur comme nom du fichier et une constante pointeur

//     //     if(ch == EOF)
//     //     break;
//     //     printf("%c", ch);
//     // }
//     // fclose(fp);

// /*
//     FILE *fp;
//     fp = fopen("file.txt","w");
//     fprintf(fp,"bonjour le monde"); //ecrire dans un fichier en mode ecriture
//     fclose(fp);
// */

// /*
// FILE *fp;
// char caracter[255];

// fp = fopen("file.txt", "r");
// while (fscanf(fp, "%s", caracter) != EOF)
// {
//     printf("%s", caracter);
// }
//    fclose(fp);
//         getch() pour obtenir
// */

// //===============fputs=====

// // FILE *fp;
// // fp = fopen("file.txt","w");
// // fputs("bonjour le langage c",fp);
// // fclose(fp);
// // getch();


// //===============fgets=====
// /*
// FILE *fp;
// char file[300];
// fp=fopen("file.txt","r");
// printf("%s",fgets(file,200,fp));
// fclose(fp);
// getch();*/
// //====================================


// //=========================fseek====
// /*
//     il existe trois constantes qui sont utiliser pour la fonction fseek
//     SEEK_SET,SEEK_CUR et SEEK_END
// */
// /*
//     FILE *fp;
//     fp = fopen("file.txt", "w+");
//     fputs("bonjour",fp);

//     fseek(fp,20,SEEK_SET);
//     fputs("ce ci est un tp",fp);
//     fclose(fp);
// */

// //========rewind()====================

//    /*
//     FILE *fp;
//     char c;
//     fp =fopen("file.txt","r");
//     while ((c=fgetc(fp)) != EOF)
//     {
//         printf("%c", c);
//     }
//     rewind(fp);

//     fclose(fp);
//     getch();
// */

// //===================ftell==============

//     FILE *fp;
//     int tail;
//     fp = fopen("file.txt", "r");
//     fseek(fp,0,SEEK_CUR);

//     tail = ftell(fp);
//     fclose(fp);
//     printf("la taille du fichier est %d octets", tail);
//     getch();

//     return 0;
// }

// exemple de la recupperaton d'un chemin d'acces 
int main(int argc, char *argv[])
{

    char *chemin;
    int i;
    i = 12 ;

    chemin = (char*)malloc(sizeof (char) * strlen(argv[0] - i));

    strcpy(chemin, argv[0]);

    strcat(chemin, argv[1]);
    
    return 0;
}