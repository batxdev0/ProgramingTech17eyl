#include <stdio.h>
#include <string.h>


int readBooks(book lBook[], int n, char* filename){
    int c = 0;
    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");
        exit(-1);
    } else {
        while(c<n && fscanf(fp,"%13s%49s%d",lBook[c].ISBN,lBook[c].title,&lBook[c].available) == 3){
            c++;
        }<
    }
    fclose(fp);
    return c;
}


int selectAvailable(book lBook[], int nBook, book* rBook[]){
    int counter = 0;
    for(int i = 0; i<nBook;i++){
        if(lBook[i].available == 1){
            rBook[counter++]=&lBook[i];
        }
    }
    return counter;
}

void printAvailable(book *rBook[], int availablecounter){

    for(int i = 0; i<availablecounter;i++){
        printf("%13s\n",rBook[i]->ISBN);
    }
}