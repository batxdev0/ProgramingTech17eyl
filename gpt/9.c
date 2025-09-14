#include <stdio.h>
#include <string.h>

// ->diabolical zorlukta bir sınavdı.

/*
typedef struct { 
    char serialID[13];  // exactly 12 alphanumeric chars + '\0'
    int  n_items;       // can be 0 or more
} product;

*/


int readAndCompress(char* filename, product list[], int maxn){


    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");
        exit(-1);

    } else {
        int c = 0;
        char serialID[13];
        int n_items;
        int pos = -1;
        while( c maxn && fscanf(fp,"%s%d",serialID,&n_items) == 2){
            if(strlen(serialID) !=12) continue;
            for(int i = 0; i<maxn;i++){
                // eğer aynıysa;
                if(i<c && strcmp(list[i].serialID,serialID) == 0){
                    pos = i;
                    break;
                }
            }
            // aynı olduğu durum;
            if(pos>=0){
                //check first for the capacity?
                if(list[pos].serialID >= 200) continue;

                 //list[pos].serialID += n_items; bu yanlış sen serial ID equals ypamiyosun bu suan {serialID,n_items} diye gözüküyor
                 // olması gereken
                list[pos].n_items += n_items;

                
            } else {
                //strstr(list[c].serialID, serialID); str str değil strcpy kullanılcaksın
                strcpy(list[c].serialID,serialID);
                //list[c].serialID = n_items; üstteki list serialId ile aynı hata.
                list[c].n_items = n_items;
                c++;
            }
        }
        fclose(fp);
        return c;
    }

}


int selectThresholdStable(product list[], int n, int threshold, product* ref[]){
        int counter = 0;
    for(int i = 0; i<n;i++){
        if(list[i].n_items >= threshold){
            ref[counter++]=&list[i];
        }

    }
    return counter;
}


int matchPattern(char* id, char* pattern){
    //--

    

}


// iki pointeri eşitlerken '&' kullanmana gerek yok.
void sortRefsByStockDesc(product* ref[], int m) {
    int iMax = 0;
    product* tmp = NULL;

    for(int i = 0; i<m-1;i++){
        iMax = i;
        for(int j = 1; j<m;j++){
            if(ref[j]->n_items > ref[iMax]->n_items || ref[j]->n_items == ref[iMax] && strcmp(ref[j] -> serialID,ref[iMax] -> serialID)<0) {
                iMax = j;
            }
            /*if(strcmp(ref[i]->serialID,ref[j]->serialID)<0)
            iMax = j; */
        }
    // burda böyle bir değişkeni declare ediyosun, bir değişkennin specific bir kısmını değil serialID vs yazmana gerek yok.
    /*    tmp = &ref[i]->serialID;
    ref[i]->serialID = ref[iMax]->serialID;
    ref[iMax] -> serialID =& tmp;
    */
   tmp = ref[i];
   ref[i] = ref[iMax];
   ref[iMax] = tmp;


    }

}


// 
product* kthLargestStable(product list[], int n, int k) {
    int iMax = -1;
    product* tmp = NULL;
    product* ref[5000];

    
    for(int i = 0; i<n;i++) ref[i] = &list[i];

    if(k < 1 || k > n) return NULL;

    for(int i = 0; i<n-1;i++){
        iMax = i;
        for(int j = 1; j<n; j++){
            if(list[j]->n_items > list[iMax] -> n_items || list[j] -> n_items == list[iMax] -> n_items && ref[j]<ref[iMax]){
                iMax = j;
            }

        }
        tmp = ref[i];
        ref[i] = ref[iMax];
        ref[iMax] = tmp;

    }

}
