#include <stdio.h>
#include <string.h>
/* A = 65
   a = 97
*/



void cikar(float a, float b) {
    float answ = a-b;

    if (a>b) {
        printf("işleminizin sonucu: %f", answ);
    } else {
        printf("Bu işlem yapılamaz");
    }
    

}

void PrintArray(int arr[]){
    
    for(int i = 0; i<sizeof(arr);i++) {
        printf("%d ",arr[i]);
    }
}

void sumColumns(double arr[][3],int size) {
    int sum = 0;
    for(int i = 0; i<size;i++) {
        for(int j = 0; j<3;j++) {
            sum += arr[j][i];
            

            

        }

        printf("%d nd column sum: %d\n",i+1,sum);
        sum = 0;
    }
}

int uzunluk(char str[]) {
    int i;
    for(i=0; str[i] != '\0'; i++) {
    }

    return i;
}


void ters(char n[]){
    char current;
    int size = strlen(n);
    for(int i = 0; i< strlen(n) /2;i++) {
        printf("test: %s\n",n);
        current = n[i];
        n[i] = n[size-i-1];
        n[size-i-1] = current;
        


    }
    printf("Reverse text: %s",n);
}
int main(void) {

    /*float a = 3.6;
    float b = 3.4;
    cikar(a,b); *()
    arr */
    
  // double array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  // sumColumns(array,3);
    

    /*char letter[] = "Batu Taskan" ;
    
    
for(int i = 0; letter[i] != '\0'; i++) {
    printf("%c",letter[i]);
} //sonunda 0\ da var ondan 12 byte */




/*int numbers[2][5] = {};
for(int i = 0; i<2;i++) {
    for(int j = 0; j<5;j++){
    
        printf("%d satır %d sütundaki sayıyı giriniz:",i+1,j+1);
        scanf("%d", &numbers[i][j]);
    }
    printf("\n");
}

for(int i = 0; i<2;i++){
    for(int j = 0; j<5;j++){
        printf("%d ",numbers[i][j]);
    }
    printf("\n");

}

*/

    
   

    /*char b[100];
    printf("İsim: ");
    scanf("%s", b);
    ters(b); */

    /*int num1 = 20;
    int num2 = 10;
    int current;

    current = num2;
    num2 = num1;
    num1 = current;
    
    printf("num1:%d\n",num1);
    printf("num2:%d\n",num2); */

   /* int nums[5] = {1,2,3,4,5};

    int *p = nums;

    printf("%d\n",sizeof(nums));

    for(int i = 0; i<(sizeof(nums) / sizeof(int)); i++){
        printf("%d", *(p + i));

    }

    for(int i = 0; i<(sizeof(nums) / sizeof(int)); i++){
        printf("%d", p[i]);

    } */

    char name[25] = "bedirhan";

    char *p = &name[2];
    printf("%s\n",p);
    printf("%s\n",name);


   
    
    return 0;
}

     // The problem was that 'j' was not declared before use.

    
