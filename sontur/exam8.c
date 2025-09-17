#include <stdio.h>
#include <string.h>


int readStudents(char* filename, student s[], int n) {

    FILE* fp = fopen(filename,"r");

    if(fp == NULL) {
        printf("Error opening the file");
        exit(-1);

    } else {
        int counter = 0;
        while(counter < n && fgets(tmp,'%d',fp)) {

        }
    }


}



void sortStudents( student s[], int ns){
    student* tmp = NULL;
    int iMax = 0;
    for(int i = 0; i<ns -1; i++) {
        iMax = i;
        for(int j = 0; j<ns; j++) {
            if(s[j].avg > s[iMax].avg){
                iMax = j;
            }
        }

        tmp =& s[i];
        s[i] = s[iMax];
        s[iMax] = tmp;
    }

}