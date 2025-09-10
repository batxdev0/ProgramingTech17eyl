#include <stdio.h>
#include <string.h>


int readStudents(char* filename,student s[], int n){

    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error opening the file");
    
    } else {
        int ns = 0;
        while(ns<n && fscanf(fp, "%29s", s[ns].name) != 1) break;
        
        int sum = 0, cnt = 0, score;

        while(fscanf(fp,"%d",&score) == 1 && score >= 18 && score <=30){
            sum += score;
            cnt++;

        }
        s[ns].n= cnt;
        
    }
}