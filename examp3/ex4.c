#include <stdio.h>
#include <string.h>


int readProducts(product lProd[], int n, char* filename){
    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");
        exit(-1);
    } else {
        char serialID[15];
        int n_items;

        int c = 0;
        while(c < n && fscanf(fp,"%s%d",serialID,&n_items) == 2){
            int pos = -1;
            for(int i = 0; i<c; i++){
                if(strcmp(lProd[i].serialID, serialID) == 0){
                    pos = i;
                    break;
                } 
            }
            if(pos>=0){
                lProd[pos].n_items += n_items;
            } else {
                if(c<n){
                    strcpy(lProd[c].serialID,serialID);
                    lProd[c].n_items = n_items;
                    c++;

                }
            }

        }

        fclose(fp);
        return c;
    }
}