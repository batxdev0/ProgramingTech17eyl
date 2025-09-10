#include <stdio.h>
#include <string.h>


int selectStudents(student listStudents[], int n, student* selStudents[], char* threshold){

    int counter = 0;
    for(int i = 0; i<n;i++){
        if(listStudents[i].scorw >= atoi(threshold)){
            counter++;
        }
    }

    return counter;
}

void printResults(student *selStudents[], int selectedStud, char* filename){
     
}