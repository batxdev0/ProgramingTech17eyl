#include <stdio.h>
#include <string.h>



int selectKids(kid listKids[], int ns, kid *selKids[], int threshold){
    int counter = 0;
    for(int i = 0; i<ns;i++){
        if(listKids[i].age < threshold ){
            selKids[counter++] = &listKids[i];

        }
    }

    return counter;
}

void printKids(kid* selKids[], int nsel){
    for(int i = 0; i<nsel;i++){
        printf("%s%s%d\n", selKids[i]->name,selKids[i]->surname,selKids[i]->age);

    }
}