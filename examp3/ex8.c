#include <stdio.h>
#include <string.h>


int readStudents(char* filename, student s[], int n){

    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");
        exit(-1);
    } else{
        int c = 0;

        while(c < n && fscanf(fp,"%s",s[c].name) == 1){
            int score;
            int sum = 0;
            int numExams = 0;
            while(fscanf(fp,"%d",&score) == 1){
                sum += score;
                numExams++;
                

            }  
            s[c].nr = numExams;
            s[c].avg = (float) sum / numExams;
            c++;

        }
        fclose(fp);
        return c;

    }

}


void sortStudents(students s[], int ns){
    int iMin;
    student temp;
    for(int i = 0; i<ns -1;i++){
        iMin = i;
        for(int j = i+1 ; i<ns ; j++){
            if(s[j].avg < s[iMin].avg){
                iMin = j;
            }
            
        }

        temp = s[i];
        s[i] = s[iMin];
        s[iMin] = temp;

    }
}