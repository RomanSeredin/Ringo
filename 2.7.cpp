#include "stdafx.h"
#include <stdio.h>
#include  <stddef.h>
#include  <string.h>

int main(void) {
    const size_t BUF_SIZE = 255;
    char buf[BUF_SIZE];
    
    int counts[255];
    memset(counts, 0, sizeof(counts));
    
    fgets(buf, BUF_SIZE, stdin);
    for (int i = 0; i < strlen(buf); ++i)
        if (buf[i] == 10 || buf[i] == 13) {
            buf[i] = 0;
            break;
        }
    
    for (size_t i = 0; i < strlen(buf); ++i)
        counts[(unsigned char) buf[i]] += 1;
    
    for (size_t i = 0; i < 255; ++i)
        if (counts[i])
            printf("char code[%d] (%c)\t%d\n", i, i, counts[i]);

 fgets(buf, BUF_SIZE, stdin);
}