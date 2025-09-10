#include <stdio.h>
#include <string.h>






int readProducts(product lProd[],int n, char* filename){
    
    
    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the");
    } else{

        int np = 0;
        while (np<n && fscanf(fp,"%s%d",serialID,&n_items) ==2)
        {
            
            int pos = -1;
            for(int i = 0; i < np; i++) {
                if(strcmp(lProd[i].serialID, serialID) == 0) {
                    pos = i;
                    break;
                }
            }
            // Now, after the for loop:
            if(pos >= 0) {
                lProd[pos].n_items += n_items;
            } else {
                strcpy(lProd[np].serialID, serialID);
                lProd[np].n_items = n_items;
                np++;
            }
        }
        fclose(fp);
        return np;
    }
    
}

int selectProducts(product lProd[], int numberofstoredprods, product *rProd[],char* threshold /*3*/){
    
    int counter = 0;
    for(int i = 0; i<numberofstoredprods;i++){
        if(lProd[i].n_items > atoi(threshold)){
            rProd[counter++] = & lProd[i];
        }
    }
    return counter;
}



int main(){

    
}



//strcmp//compare
//strcpy//copy
//strstr