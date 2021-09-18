#include <stdio.h>
#include <ctype.h>
#include "scanner.h"



void main()
{
char caracter;
int token, cantidad_letras, i, cadena[100], j;

while(caracter != EOF)
{
caracter=getchar();
token=get_token(caracter);


switch(token)
{
    case FDT: 
    if(cantidad_letras>0)
    {
    printf("\n Cadena: ");
    for(j=0; j<=cantidad_letras; j++)
    {
        ungetc(cadena[i-j], stdin);
    }
    for(j=0; j<cantidad_letras; j++)
    {
    printf("%c", getchar());
    }
    putc(caracter, stdin);
    cantidad_letras=0;
    i=0;
    }
    printf("\n Fin de texto:");
    break;

    case SEP:
    if(cantidad_letras>0)
    {
    printf("\n Cadena: ");
    for(j=0; j<=cantidad_letras; j++)
    {
        ungetc(cadena[i-j], stdin);
    }
    for(j=0; j<cantidad_letras; j++)
    {
    printf("%c", getchar());
    }
    putc(caracter, stdin);
    cantidad_letras=0;
    i=0;
    }
    printf("\n Separador: %c", caracter);
    break;

    case CAD:
    cadena[i]=caracter;
    i++;
    cantidad_letras++;
    break;

    default:
    if(cantidad_letras>0)
    {
    printf("\n Cadena: ");
    for(j=0; j<=cantidad_letras; j++)
    {
        ungetc(cadena[i-j], stdin);
    }
    for(j=0; j<cantidad_letras; j++)
    {
    printf("%c", getchar());
    }
    putc(caracter, stdin);
    cantidad_letras=0;
    i=0;
    }
    break;


}
}
}

