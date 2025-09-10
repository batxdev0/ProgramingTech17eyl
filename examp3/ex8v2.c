#include <stdio.h>
#include <string.h>


int readStudents(char* filename, students s[], int n ){
    FILE *fp = fopen(filename,"r");

    if(fp == NULL){
        printf("Error opening the file");
        exit(-1);

    } else {
        int counter = 0;
        while(counter < n & fscanf(fp,"%29s",s[counter].name) == 1 ){
            int score;
            int sum = 0;
            int numExams = 0;
            if(fscanf(fp,"%d",&score)){
                sum += score;
                numExams++;
            }
            s[counter].nr = numExams;
            s[counter].avg = (double)sum/numExams;

        }
    }
}

void sortStudents(student s[], int ns ){
    students *temp;
    int iMin;
    for(int i = 0; i<ns-1;i++){
        iMin = i
        for(int j = i+1; j<ns;j++){
            if(s[j] > s[iMin]){
                iMin = j;
            }
        }
    temp = s[i];
    s[i] = s[iMin];
    s[iMin] = temp;
    }

}