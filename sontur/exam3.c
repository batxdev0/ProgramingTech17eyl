#include <string.h>
#include <stdio.h>

// int 31 means '30 cum laude'


int selectBest(student lStud[], int numofstudent, student* rStud[], int threshold){

    int counter = 0;
    for(int i = 0; i<numofstudent;i++) {
            int cumlaudecounter = 0;
        for(int j = 0; j<lStud[i].nExams; j++){
            if(lStud[i].passedExams[j].score == 31){
                cumlaudecounter++;
            }
        }
        if(cumlaudecounter > threshold){
            rStud[counter++]=&lStud[i];
        }
    }
    return counter;
}

void printBestStudents(student *rStud[], int bestStudent) {
    for(int i = 0; i<bestStudent; i++){
        printf("%s",&rStud[i]->matricola);

    }

}
