#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

/**
 * @brief  this is the code for function
 * 
 */

void flush()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
