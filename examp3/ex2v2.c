#include <stdio.h>
#include <string.h>

int readStudents(student lStud[], int n, char* filename){

    FILE *fp = fopen("filename","r");

    if(fp == NULL){
        printf("Error opening the file.");
    }else{
        int counter = 0;
        while(counter<n & fscanf(fp,"%s%d",lStud[counter].matricola,&lStud[counter].nExams)){
            for(int i = 0; i<n;i++){
                if(fscanf(fp,"%s%d",lStud[counter].passedExams[i].examName,&lStud[counter].passedExams[i].score)){
                    counter++;
                }
            }
        }

        return counter;

    }

}

int selectBest(student lStud[], int nstud, student *rStud[], char* filename){
    int counter = 0;
    for(int i = 0; i<nstud;i++){
        int examscore = 0;
        for(int j = 0; j<lStud[i].nExams;j++){
            if(lStud[i].passedExams[j].score >=31){
                examscore++;
            }

        }

        if(lStud[i].nExams >= atoi(filename)){
            rStud[counter++]=&lStud[i];

        }
    }

    return counter;

}

void printBestStudents(student* rProd[], int nBest){
    for(int i = 0; i<nBest;i++){
        printf("%s\n",rProd[i]->matricola);

    }
}

