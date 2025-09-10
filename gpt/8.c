#include <stdio.h>
#include <string.h>


/*
typedef struct {
    char courseID[10];   // unique code
    int students;        // number of enrolled students
} course;

typedef struct {
    char profID[12];     // unique professor ID
    course* taught[15];  // pointers to courses taught by this professor (max 15)
    int n;               // number of courses taught
} professor;

*/


int findBusyProfs(professor staff[], int n, int k, professor* sel[]){

    int c = 0;
    for(int i = 0; i<n;i++){
        if(staff[i].n >= k){
            sel[c++]=&staff[i];

        }
    }
    return c;
}

professor* maxStudentsProf(professor staff[], int n) {

    professor* temp = NULL;
    int maxEnrolled = -1;
    for(int i = 0 ; i<n;i++){
        if(staff[i].n == 0) continue;
        int eachSum = 0;
        for(int j = 0; j<staff[i].n;j++){
            eachSum += staff[i].taught[j]->students;

        }
        if(eachSum>=maxEnrolled){
            maxEnrolled = eachSum;
            temp = &staff[i];
        }
    }
    return temp;
 
}


void listCourses(professor* p){
    for(int i = 0; i<p->n;i++){
        printf("%9s\n",p->taught[i]->courseID);

    }
}