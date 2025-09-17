#include <stdio.h>
#include <string.h>

int readProducts(product lProd[], int n, char* filename){

    FILE *fp = fopen(filename,"r");

    if(fp == NULL){
        printf("Error while opening the file");
        exit(-1);
    } else {
        int counter = 0; 

        while(counter<n && fscanf(fp,"%s%d",lProd[counter].serialID,&lProd[counter].n_items)){
            counter++;
        }

        return counter;
    }


}

void sortProducts( product* rProd[], int numberofproducts){

        product* tmp = NULL;
        int maxIndex = 0;
        for(int i = 0; i<numberofproducts -1; i++){
            maxIndex = i;
            for(int j = i+1; j<numberofproducts; j++){
                if(strcmp(rProd[j]->serialID,rProd[maxIndex]->serialID)<0){
                    maxIndex = j;
                }
            }

            tmp = rProd[i];
            rProd[i] = rProd[maxIndex];
            rProd[maxIndex] = tmp
        }
}