#include <stdio.h>
#include <string.h>

#include "color_pair_config.h"
#include "color_pair_service.h"
#include "color_code_documenter.h"

void DocumentColorCode()
{
    char color_str_buffer[MAX_COLORPAIR_NAME_CHARS];
    int color_code;
    printf("-----------------------------------------\n");
    printf("|\t\tColor code list\t\t|\n");
    printf("-----------------------------------------\n");
    printf("|   Color Code\t|\tColor pair\t|\n");
    printf("-----------------------------------------\n");


    for(color_code = 1; color_code <= MAX_COLORPAIR_SUPPORTED; color_code++)
    {
        memset(color_str_buffer, 0, MAX_COLORPAIR_SUPPORTED);
        ColorPairToString(GetColorFromPairNumber(color_code), color_str_buffer);
        printf("|\t%d\t|\t%s\t|\n", color_code, color_str_buffer);
    }

    printf("-----------------------------------------\n");

}
