#include <stdio.h>
#include <string.h>

void groupStudents(student s[], int n, int counter[10]){
    for(int i = 0; i<10; i++){
        counter[i] = 0;
    }// group counter;

    for(int i = 0; i<n;i++){
        int group = s[i].n /10;
        
        if(group > 9){
            group = 9;
            counter[group]++;
        } else {
            counter[group]++;
        }


    }

}

void bestExams(student s[], int n, exam* best[]){
    exam* pt = NULL;
    int iMax = 0;
    for(int i = 0; i<n;i++){
        pt = &s[i].array_of_exams[0];
        for(int j= 0; j<s[i].n;j++){
            if(pt->score >= pt[iMax]->array_of_exams[j]){
                iMax = i;

            }

        }
        best[iMax]=&s[iMax]

    }
    
}

void bestExams(student s[], int n, exam* best[]){
    exam* pt = NULL;
    int iMax = 0;
    for(int i = 0; i<n;i++){
        pt = &s[i].array_of_exams[0];
        for(int j= 0; j<s[i].n;j++){
            if(s[i].array_of_exams[j] >= pt->core){
                pt = &s[i].array_of_exams[j];

            }

        }
        best[iMax]=&pt;

    }
    
}