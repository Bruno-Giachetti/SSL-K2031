#include <stdio.h>
#include "scanner.h"
#include <ctype.h>


enum{FDT,SEP,CAD};

int get_token(char caracter)
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





    


