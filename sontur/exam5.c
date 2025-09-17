#include <stdio.h>
#include <string.h>

int selectStudents(student s[],int n, int ne,student* selSt[]) {

    int nsel = 0; 
    for(int i = 0; i<n; i++) {
        if(s[i].n >= ne) {
            selSt[nsel++]=&s[i];

        }
    
    }
    return nsel;
} 

student* bestStudent(student s[], int n) {

    int maxScore = -1;
    student * tmp = NULL;

    for(int i = 0; i<n; i++){
        int sum = 0; 
        for(int j = 0; j<s[i].n; j++) {
            sum += s[i].array_of_exams[j].score;

        }
        if(sum > maxScore) {
            maxScore = sum;
            tmp = &s[i];

        }
        


    }

    return tmp;
    
}