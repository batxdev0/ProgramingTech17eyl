#include <stdio.h>
#include <string.h>

int readFlights(flight Flist[], int n, char* filename){

    FILE *fp = fopen(filename,"r");

    int c = 0;
    if(fp == NULL){
        printf("Error opening the file");
        exit(-1);

    } else {

        while (c<n && fscanf(fp,"%9s%39s%d",Flist[c].flightID,Flist[c].destination,&Flist[c].seats) == 3)
        {
            c++;
        }
        
        

    } 
    fclose(fp);
    return c;
}


int selectFullFlights(flight Flist[], int numofflight, flight* rList[]){
    
    int counter = 0;
    for(int i = 0; i<numofflight;i++){
        if(Flist[i].seats == 0){
            rList[counter++] = &Flist[i];
        }
        
    }
    return counter;
}


void printFlights(flight* rList[], int n){
    for(int i = 0; i<n; i++){
        printf("%9s %29s\n", rList[i]->flightID,rList[i]->destination);
    }
}