#include <stdio.h>
#include <locale.h>
#include <conio.h>

int option, i, j, tam;

int function1()
{
    gotoxy(3, 2);
    printf("¿Cuál es el tamaño del array?: ");
    scanf("%d", &tam);
    for (i = 0; i < tam; i++)
    {
    }

    return 0;
}

int function2()
{
    return 0;
}

int main()
{
    char restart;
    /*Sé que no enseñó esto profe pero una clase dejó de tarea investigar como poner las
    tildes y otros caracteres, entonces lo hago con  la librería locale.h y la función
    setlocale()*/
    system("clear");
    setlocale(LC_ALL, "");
    do
    {
        system("clear");
        gotoxy(15, 2);
        printf("MENU PRINCIPAL");
        gotoxy(3, 4);
        printf("1. ");
        gotoxy(3, 6);
        printf("2. ");
        gotoxy(3, 8);
        scanf("%d", &option);
        system("clear");
        switch (option)
        {
        case 1:
            function1();
            break;
        case 2:
            function2();
            break;
        default:
            printf("Elegiste una opción incorrecta");
            break;
        }
        printf("\n¿Quieres volver al menú principal? (y/n): ");
        scanf(" %c", &restart);
    } while (restart == 'y' || restart == 'Y');

    return 0;
}