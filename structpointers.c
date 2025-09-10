#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

typedef struct Student {
    char isim[20];
    char soyisim[20];
    int num;
    int note[3];
};

float ortalama(struct Student st){
    float  sum = 0;
    for(int i = 0; i<3;i++){
        sum = sum + st.note[i];
        
    }
    float avg = (sum)/ 3;
    return avg;
};


int main() {
    int size;

    struct Student students[50];

    printf("Kac ogrenci giriceksiniz:");
    scanf("%d",&size);

    if (size > 50){
        printf("Bu kadar ogrenci girilmez");
    } else {
        for(int i  = 0; i < size; i++){
            printf("%d ogrencinin adi: ", i+1);
            scanf("%s",students[i].isim);

            printf("%d ogrencinin soyadi: ", i+1);
            scanf("%s",students[i].soyisim);

            printf("%d ogrencinin numarası: ", i+1);
            scanf("%d",&students[i].num);

            for(int y = 0; y < 3;y++){
                printf("Not%d:",y+1);
                scanf("%d",&students[i].note[y]);

                
            }

            printf("\n");

        }
        printf("Ortalaması 60 ve üzeri olan öğrenciler\n");

        for(int i = 0 ; i<size;i++){

            if(ortalama(students[i]) >= 60){
                printf("Ad: %s %s\n",students[i].isim,students[i].soyisim);
                printf("Numara: %d\n",students[i].num);
                printf("Ortalama: %.2f\n", ortalama(students[i]));
            }
            printf("\n");
            
        }



    }

}