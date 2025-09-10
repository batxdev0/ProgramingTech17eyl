#include <stdio.h>
#include <string.h>


int readStudents(student lstud[], int n, char* filename){
    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");
    } else {
        int nStudent = 0;
        while(nStudent<n && fscanf(fp,"%s%d",lstud[nStudent].matricola,&lstud[nStudent].nExams) ==2){
            for(int j = 0; j<lstud[nStudent].nExams;j++){
                if(fscanf(fp,"%s%d",lstud[nStudent].passedExams[j].examName,&lstud[nStudent].passedExams[j].score) ==2){
                    
                }
                
            }
            nStudent++;
        }
        fclose(fp);
        return nStudent;
    }
}

int selectBest(student lStud[], int numberOfStudents, student* rProd[], char* threshold) {
    int counter = 0;
    for(int i = 0; i<numberOfStudents;i++){
        int examcounter = 0;
        for(int j = 0; j<lStud[i].nExams; j++){
            if(lStud[i].passedExams[j].score >= 31){
                examcounter++;
                

            }

        }
        if(examcounter >= threshold){
            rProd[counter++]=&lStud[i];
        }
        
    }
    return counter;
}
