#include <stdio.h>
#include <string.h>




int readProducts(product lProd[],int n, char* filename){

    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");

    } else {
        int n_items;
        char serialID[15];

        int np = 0;
        while(np<n && fscanf(fp,"%s%d",serialID,n_items)){
            int pos = -1;
            for(int i = 0;strcmp(lProd[i].serialID,serialID) == 0;i++){
                pos = i;
                break;

            }

            //eğer bir eleman varsa
            if(pos>=0){
                lProd[pos].n_items += n_items;

            } else {
                strcpy(lProd[np].serialID,serialID);
                lProd[np].n_items = n_items;
                np++;
            }

        }
        fclose(fp);
        return np;
    }
}

int selectProducts(product lProd[], int numberofItems, product *rProd[], char* threshold){
    int cter = 0;
    for(int i = 0;i<numberofItems;i++){
        if(lProd[i].n_items >= atoi(threshold)){
            rProd[cter++] = &lProd[i];
            

        }
    }
    return cter;
}
