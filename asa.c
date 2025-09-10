#include <stdio.h>
#include <string.h>

int main() {

    /* 
     * days is an array of pointers to strings
     * Each element is a char* (pointer to char)
     * So days[0] points to "mon", days[1] points to "tue", etc.
     */
    char *days[] = {"mon","tue","fri"}, **p;

    for(int i = 0; i<3;i++)
    {
        for(int j = 0; j<3;j++){
            printf("%p\n",days[j]);
        }


    }


    printf("\n ");

   for (p = days; **p != '\0'; (*p)++)
    {
        printf("%p\n",*p);
    }
    
    
    /*
     * ptr is a pointer to a pointer (char**)
     * When we do ptr = days, we're assigning the address of the first element
     * ptr now points to days[0], which is a char* (pointer to "mon")
     * So **ptr means: dereference ptr (get days[0]), then dereference that (get 'm')
     * 
     * *ptr is the current string pointer (like days[0], days[1], etc.)
     * **ptr is the current character in that string (like 'm', 'o', 'n', etc.)
     * 
     * In the loop:
     * - ptr starts pointing to days[0] (which points to "mon")
     * - *ptr is the string pointer (points to "mon")
     * - **ptr is the character 'm'
     * - (*ptr)++ moves to the next string (days[1], then days[2])
     * - But this logic is flawed because it doesn't iterate through characters properly
     * 
     * POINTER LEVELS EXPLANATION:
     * ptr (char**) → points to an array element (which is a char*)
     * *ptr (char*) → points to a string (like "mon")
     * **ptr (char) → is a character (like 'm')
     * 
     * So:
     * - *ptr gives you the WORD (string pointer)
     * - **ptr gives you the CHARACTER (actual char value)
     * 
     * This is because:
     * 1. ptr points to days[0] (which is a char*)
     * 2. *ptr dereferences to get days[0] (which points to "mon")
     * 3. **ptr dereferences days[0] to get the first character 'm'
     */
    
     
    /*for(ptr=days;**ptr!='\0';(*ptr)++){
        printf("%c",**ptr);
    }

    return 0;
    */
}