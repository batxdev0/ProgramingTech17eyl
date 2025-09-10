#include <stdio.h>
#include <string.h>


int selectStudents(student s[], int n, int ne, student* SelSt[]){

    int nSel = 0;
    for(int i = 0; i<n;i++){
        if(s[i].n >= ne){
            SelSt[nSel++] = & s[i];

        }
    }
    return nSel;
    
}

student* bestStudent(student s[], int n){
    double iMin = -1.0;
    student* p = NULL;

    for(int i = 0; i<n;i++){
        if(s[i].n <= 0 || s[i].array_of_exams == NULL) continue;

        int examcounter = 0;
        int sum = 0;
        for(int j = 0; j<s[i].n;j++){
            sum += s[i].array_of_exams[j].score;
            examcounter++;

        }
        double avg;
        avg = (double)sum/examcounter;
        if(avg > iMin){
            iMin = avg;
            p = &s[i];
        }
    }
    return p;

}