#include <stdio.h>
#include <string.h>

int readStudents(product lProd[], int n,char* filename){
    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");

    } else {
        int counter = 0;
        while(counter<n && fscanf(fp,"%s%d",lProd[counter].serialID,&lProd[counter].n_items)){
            counter++;
        }

        return counter;
    }
}

int sortProducts(product* rProd[], int nofstudent){
    product* temp;

    for(int i = 0; i<nofstudent;i++){
        int iMin = i;
        for(int j = i+1; j<nofstudent;j++){
            if(strcmp(rProd[j]->serialID,rProd[iMin]->serialID)<0){
                iMin = j;
            }
        }
        temp = rProd[i];
        rProd[i] = rProd[iMin];
        rProd[iMin] = temp;
        
    }
}