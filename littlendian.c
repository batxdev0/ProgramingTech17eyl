#include <stdio.h>
#include <string.h>

int main() {
    int val = 0x11223344;
    char *p = (char*)&val;

    printf("%x\n",*p);
    printf("%x\n",*(p+1));
    printf("%x\n",*(p+2));
    printf("%x\n",*(p+3));
    
    
} 