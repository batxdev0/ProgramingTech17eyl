#include <stdio.h>
#include <string.h>

int readStudents(student lSstud[], int n, char* filename){

    FILE *fp = fopen(filename,"r");
    int c = 0;
    if(fp == NULL){
        printf("there is an error while opening the file");
    } else {


        while(c<n && fscanf(fp,"%s%d",lSstud[c].matricola,&lSstud[c].nExams) == 2){
            c++;
        }

    }
    return c;
}

int selectBest(student lStud[], int numofstudent, student* rStud[], int threshold){
    int counter = 0;
    for(int i = 0; i<numofstudent;i++){
        int examscore = 0;
        for(int j = 0; j<lStud[i].nExams;j++){
            if(lStud[i].passedExams[j].score >= 31){
                examscore++;
            }
        }
        if(lStud[i].nExams >= threshold){
            rStud[i]=&lStud[i];
        }
    }
}