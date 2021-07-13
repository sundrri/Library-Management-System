#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void flush()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
