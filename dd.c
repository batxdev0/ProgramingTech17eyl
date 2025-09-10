#include <stdio.h>
#include <string.h>



//size ve arr ı al
/* for loop ile arr dan veri cek */
/* 3 var formulu ile ascending order ve descending order ile verileir cek
*/


char *getir(char *string, char c) {
    char *p = string;
    int i = 0;
    for(i = 0; p[i] != c; i++) {

    }
    return (p+i);
}
int main()
{
    char name[30] ="Batu Taskan";
    char *textP = getir(&name[0],'T');
    //printf("%s", textP);
    int a = 5;
    int *d = &a;
    printf("%p",d);
    printf("%p",&a);


   
   
    return 0;
}

