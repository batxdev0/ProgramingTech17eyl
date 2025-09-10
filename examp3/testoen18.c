#include <stdio.h>
#include <string.h>





void sortKids(kid lKids[], int n, kid* rKids[]){
    int iMax = 0;
    kid * tmp = NULL;
    for(int i = 0; i<n-1; i++){
        iMax = i;
        for(int j = i+1; j<n;j++){
            if(rKids[j]->age > rKids[iMax]->age){
                iMax = j;
            }
        }
        tmp = rKids[i];
        rkids[i] = rKids[iMax];
        rKids[iMax] = tmp;
    }
}

void printOldest(kid* rKids[], int n){
    kid* temp = rKids[n-1]; // oldest kid.

    printf("%s %s %d\n",temp->name,temp->surname,temp->age);
}