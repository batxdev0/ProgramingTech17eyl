#include <stdio.h>
#include <string.h>

int readProducts(product lProd[], int n, char* filename){
    int counter = 0;

    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");
        exit(-1);
    } else {
        
        char serialID[15];
        int n_items;
        while(counter<n && fscanf(fp,"%s%d",serialID,n_items) == 2){
            int pos = -1;
            for(int i = 0; i<n;i++){
                if(strcmp(lProd[i].serialID, serialID) == 0){
                    pos = i;
                    break;
                }
            }

            if(pos >= 0){
                lProd[counter].n_items = n_items;
            } else {
                strcpy(lProd[counter].serialID,serialID);
                lProd[counter].n_items = n_items;
                counter++;
            }

        }
    }
    fclose(fp);
    return counter;
}


int selectProducts(product lProd[], int numberofstudents, kid* rProd[], char* threshold){
    int counter = 0;
    for(int i = 0; i<numberofstudents;i++){
        if(lProd[i].n_items >= atoi(threshold)){
            rProd[counter++]=&lProd[i];
        }
    }
    
    return counter;
}