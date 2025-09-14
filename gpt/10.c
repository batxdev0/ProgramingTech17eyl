#include <stdio.h>
#include <string.h>

/*
typedef struct {
    char serialID[13];  // exactly 12 alphanumeric chars + '\0'
    int  qty;           // may be negative in input (returns), final stock can be < 0
} item;
*/

int readMergeStavle(char* filename, item list[], int maxn){
    
    FILE *fp = fopen(filename,"r");
    int c = 0;
    if(fp == NULL){
        printf("There is an error opening the file");
        exit(-1);

    } else {


        char serialID[13];
        int qty;

        int pos = -1;
        while(c<maxn && fscanf(fp,"%s%d",serialID,&qty)){
            
            for(int i = 0; i<maxn; i++){
                if(strcmp(list[i].serialID,serialID) == 0){
                    pos = i;
                    break;

                }

            }
            if(pos >= 0){
                list[pos].qty += qty;
            } else {

                if(c == maxn) continue;
                strcpy(list[c].serialID,serialID);
                list[c].qty = qty;
                c++;

                
            }
        }
        
    }
    fclose(fp);
    return c;
}

int matchQ(char* id, char* pattern) {
    //couldn't figured it out.

}


int selectByPatternAndMin(item list[], int n, char* pattern, int minQty, item* ref[]){

    int c = 0;
    for(int i = 0; i<n;i++){
        if(list[i].qty >= minQty && list[i].serialID == matchQ()){
            ref[c++]=&list[i];

        }

    }
    return c;

}


void sortRefsByRank(item* ref[], int m) {
    int iMax = -1;
    product *tmp = NULL;

    for(int i = 0; i<m -1 ;i++){
        int iMax = i;
        for(int j = 1; j<m;j++){
            if(list[j].qty == list[iMax].qty)

        }
    }

}