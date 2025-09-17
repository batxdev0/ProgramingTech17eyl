#include <stdio.h>
#include <string.h>

// it could have multiple instance

int readProducts(product lProd[], int n, char* filename){

    FILE *fp = fopen(filename,"r");

    if(fp == NULL) {
        printf("Error opening the file");
        exit(-1);
    } else {
        int counter = 0;
        
        char serialID[15];
        int n_items;
        while(counter<n && fscanf(fp,"%s%d",serialID,&n_items)==2){
            int pos = -1;
            for(int i = 0; i<counter; i++){
                // eğer matricoal id ise break at
                if(strcmp(lProd[i].serialID,serialID) == 0){
                    pos = i;
                    break;
                }
            }
            if(pos >= 0) {
                // eğer tekrar gözüktüyse;
                lProd[pos].n_items += n_items;
            } else {
                //if its a new item;
                strcpy(lProd[counter].serialID,serialID);
                lProd[counter].n_items = n_items;
                counter++;
            }
        }

        return counter;
        fclose(fp); //UNUTMA ARTIK

    }
}

int selectProducts(product lProd[], int n, product* rProd[], char* threshold){
    int counter = 0;
    for(int i = 0; i<n; i++){
        if(lProd[i].n_items >= atoi(threshold)){
            rProd[counter++]=&lProd[i];
        }

    }
    return counter;
}