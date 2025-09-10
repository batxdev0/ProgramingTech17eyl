#include <stdio.h>
#include <string.h>



int findHeavyStudents(student students[], int n, int threshold, student* sel[]){

    int counter = 0;
    for(int i = 0; i<n; i++){
        int eachSum = 0;
        for(int j = 0; j<students[i].n;j++){
            eachSum += students[i].enrolled[j]->credits;
            /*eachSum += students[i].enrolled[j].credits;
            yapmışsın üste düzeltmiş çünkü structta enrolled bir pointer.
            ve point etmesi gerekir.*/ 
        }
        if(eachSum >= threshold){
            sel[counter++] =&students[i];

        }
    }  
    return counter;
}

student* mostCredits(student students[], int n){
    student* temp = NULL;
    int iMax = -1;
    for(int i = 0;i<n;i++){
        int eachSum = 0;
        if(students[i].n == 0){
            return NULL;
        }
        for(int j = 0; j<students[i].n;j++){
            eachSum += students[i].enrolled[j]->credits;
            /*eachSum += students[i].enrolled[j].credits;
            yapmışsın üste düzeltmiş çünkü structta enrolled bir pointer.
            ve point etmesi gerekir.*/ 

        }

        if(eachSum > iMax){
            iMax = eachSum;
            temp = &students[i];
        }
    }
    return temp;
}


// \n koymayı unutma
void listStudentCourses(student* s){
    for(int i = 0; i<s->n;i++){
        printf("%19s\n",s->enrolled[i]->courseID);
    }
    
}