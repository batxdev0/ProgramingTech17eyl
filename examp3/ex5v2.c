#include <stdio.h>
#include <string.h>


int selectStudents(student s[], int n, int ne, student* selSt[]){
    int nsel = 0;
    for(int i = 0; i<n;i++){
        if(s[i].n >= ne){
            selSt[nsel++]=&s[i];

        }
    }
    return nsel; //number of studens who got more than ne threshold amount ofexams.
}






student* bestStudent(student s[], int n){
    student* p = NULL;
    double iMax = -1.0;
    
    for(int i = 0; i<n; i++){
        if(s[i].n<= 0 || s[i].array_of_exams ==NULL) continue;

        int sum = 0;
        for(int j = 0; j<s[i].n;j++){
            if(s[i].score <= 18 || s[i].score >=30){
                printf("Error in array's scores index:%s",&i);
            } else {
                sum += s[i].array_of_exams[j].score;

            }
            

            
        }
        double avg = (double)sum/s[i].n;
        if(avg>iMax){
            iMax = avg;
            p =&s[i];
        }
    }
    
    return p;
}