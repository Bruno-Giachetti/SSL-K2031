#include <stdio.h>
#include "scanner.h"
#include <ctype.h>


enum{FDT,SEP,CAD};

int tokens(char caracter)
{
if(caracter == EOF)
return FDT;

if(caracter == ',')
return SEP;


if(caracter != EOF && caracter != ',' && !isspace(caracter))
return CAD;
else
return -1;
}

int imprimir(char caracter)
{
int token=0, cantidad_letras, i, cadena[100], j;
token=tokens(caracter);


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
return 0;
}

void get_token()
{
    char c;
    while(c != EOF)
    {
    c=getchar();
    imprimir(c);
    }
}



    


