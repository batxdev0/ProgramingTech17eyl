#include <stdio.h>
#include <string.h>



void groupStudents( student s[], int n, int counters[10]){

    //create groups with iteration
    for(int i = 0; i<10; i++){
        counters[i] = 0;
    }
    // fill the counters 
    for(int i = 0; i<n; i++){
        int algo = s[i].n / 10;

        if(algo >= 9){
            counters[9]++;
        } else {
            counters[algo]++;
        }

    }


}

void bestExams(student s[], int n, exam* best[]){

    exam* tmp = NULL;
    for(int i = 0; i<n; i++){
        tmp = & s[i].array_of_exams[0];
        for(int j = 1; j<s[i].n; j++){
            if(s[i].array_of_exams[j].score > tmp -> score){
                tmp = & s[i].array_of_exams[j];
            }
        }
        best[i] = tmp;


    }

}