

#include <stdio.h>
#include <string.h>




void groupStudents(student s[], int n , int counter[10]){


    for(int i = 0; i<n;i++){
         counter[i] = 0;
    }

    for(int i = 0; i<n;i++){
        int group = s[i].n / 10;

        if(group > 9){
            group = 9;

        } else {
            counter[group]++; // counter[group++] dersek içindekini arttırır value'yi değil.
        }

    }
}

void BestExams(student s[], int n, exam* best[]){
    exam* ptr = NULL;
    for(int i = 0; i<n; i++){
        ptr = &s[i].array_of_exams[0];// if we gonna store all the data we need a starting point for each student.
        for(int j = 1; j<s[i].n;j++){
            if(s[i].array_of_exams[j].score >= ptr->score){
                ptr = &s[i].array_exams[j];
            }
        }
        best[i] = &ptr;

    }  
}