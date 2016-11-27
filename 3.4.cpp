#include <stdio.h>
#include <ctype.h>
 
int digitssum(const char * s) { return ( *s ) ? ( isdigit(*s) ) ? *s - '0' + digitssum(s+1) : digitssum(s+1) : 0; }
 
int main(void){
    char buf[BUFSIZ];
    
    while ( printf("String: ") && fgets(buf, BUFSIZ, stdin) && *buf != '\n' )
        printf("Sum of digits: %d\n", digitssum(buf));
    
    return 0;
              }