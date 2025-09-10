#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)



struct Car {
    int tekersay;
    int beygir;
    float motor;
    int model;

};

struct person {
    int age;
    char name[20];
    char surname[20];

    struct Car araba;


};

struct ogrenci {
    char isim[25];
    char soyisim[25];
    int numara;

};


void goster(struct ogrenci a){

    printf("%s %s %d", a.isim, a.soyisim, a.numara);
     
    

}

int main() {

   /* int a = 10;
    struct person batu = {19,"Batuhan","Taskan"};

    batu.age = 21;
    strcpy(batu.name,"Arda");
    strcpy(batu.surname,"Surmen");

    printf("%s %s %d\n", batu.name, batu.surname, batu.age);
    
    struct Car mycar = {0};
    struct Car mycar1 = {4,1000,2.3,6};
   mycar1 =  mycar;
    printf("%d %d %f %d", mycar1.tekersay, mycar1.beygir, mycar1.motor, mycar1.model);
    */

   /* struct person Batu = {19, "Batuhan","Taskan",{4,1000,1.3,12}};
    printf("%d %s %s %d %d %f %d",Batu.age,Batu.surname,Batu.name,Batu.araba.beygir,Batu.araba.beygir,Batu.araba.motor,Batu.araba.tekersay);
    */
   struct ogrenci Ogrenciler[3];

    for(int i = 0; i<3;i++){
        printf("%d ogrencileirn verileirni giriniz:",i+1);
        scanf("%s %s %d", &Ogrenciler[i].isim, &Ogrenciler[i].soyisim, &Ogrenciler[i].numara);
    
    }

    for(int i = 0; i<3; i++) {
        goster(Ogrenciler[i]);
    }

    

 


    return 0;
}