#include <stdio.h>
#include <string.h>


int readProducts(product lProd[], int n, char* filename){
    FILE *fp = fopen(filename,"r");

    if(fp == NULL){
        printf("This file cannot be opened");
    } else {
        int counter = 0;
        while(counter < n && fscanf(fp,"%s%d",lProd[counter].serialID,&lProd[counter].product)){
            counter++;
        }
        
    fclose(fp);
    return counter;
    }
    
}

void sortProducts(product* rProd[], int numberOfproducts){
    product* tmp;
    for(int i = 0; i<numberOfproducts;i++){
        int iMin = i;
        for(int j = i+1; j<numberOfproducts;j++){
            if(strcmp(rProd[j]->serialID,rProd[iMin]->serialID)<0){
                iMin = j;
            }

        }
        // tmp aktif değere gelir
        tmp = rProd[i];
        // aktif değer bulunan değere eşitlenir
        rProd[i] = rProd[iMin];
        // bulan değer eski değere eşitlenip değişim yapılır
        rProd[iMin] = tmp;

    }
}