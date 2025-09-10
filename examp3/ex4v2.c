#include <stdio.h>
#include <string.h>

int readProducts(product lStud[], int n,char* filename){
    FILE *fp = fopen("filename","r");
    if(fp == NULL){
        printf("Error opening the file");
        exit(-1);
    }else{
        char serialID[15];
        int n_items;

        int counter = 0;

        while(fscanf(fp,"%s%d",serialID,&n_items)==2){
            int pos = -1;

            
            for(int i = 0; i<counter;i++){
                if(strcmp(lStud[i].serialID,serialID) == 0){
                    pos = i;
                    break;
                }
            
            }
            if(pos>=0){
                lStud[pos].n_items += n_items;

            } else {
                if(counter<n){
                    strcpy(lStud[counter].serialID,serialID);
                    lStud[counter].n_items = n_items;
                    counter++;

                }


            }
        }
        fclose(fp);
        return counter;
        
    }
}


int selectProducts(product lProd[],int nprod, product* rProd[],char* threshold){
    int counter = 0;
    for(int i = 0; i<nprod;i++){
        if(lProd[i].n_items >= atoi(threshold)){
            rProd[counter++] = & lProd[i];
        }
    }
    return counter;
}
