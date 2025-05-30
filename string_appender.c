//
// Created by Andrii Klykavka on 30.05.2025.
//

#include "string_appender.h"

#include <stdlib.h>
#include <string.h>

char* append_string(char *dest, const char *source) {
    size_t len = strlen(dest) + strlen(source) + 1;
    dest = realloc(dest, len);
    if (dest == NULL) {
        exit(1);
    }
    strcat(dest, source);
    return dest;
}
