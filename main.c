#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_appender.h"


int main(void) {
    const char source[] = "Hell0";
    char *dest = malloc(strlen(" world") + 1);
    strcpy(dest, " world");

    char* pDest = append_string(dest, source);
    printf("%s", pDest);
    return 0;
}
