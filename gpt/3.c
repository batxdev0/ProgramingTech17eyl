#include <stdio.h>
#include <string.h>


/* 
typedef struct {
    char title[40];   // book title (no spaces, max 39 chars)
    int days;         // number of days the book has been borrowed
} loan;

typedef struct {
    char studentID[12]; // unique student identifier
    loan* borrowed;     // pointer to an array of loans (max 20 per student)
    int n;              // number of active loans for this student
} student;
*/




// find students at least k books borrowed, and select them.
int findLateStudents(student list[], int n, int k, student* sel[]) {
    int counterforpointer = 0;
    for(int i = 0; i<n;i++){
        int c = 0;
        for(int j = 0; j<list[i].n;j++){
            if(list[i].borrowed[j].days > 30){
                c++;
            }

        }
        
    if(c >= k){
        sel[counterforpointer++]=&list[i];
    }


    }

    return counterforpointer;
}



student* worstStudent(student list[], int n) {
    student* Max = NULL;
    int maxTotal = -1; // 0'dı -1 oldu

    for(int i = 0; i<n;i++){
        int sumForEach = 0;
        for(int j = 0; j<list[i].n;j++){
            sumForEach+= list[i].borrowed[j].days;
            

        }
        //Maximum değeri bul, toplam

       // if(Max[i]->days >= Max[iMax]->days){
       //     iMax = i;
       // 


       // total'i e algo loop uyguluyor.
       if(list[i].n>0 && sumForEach>maxTotal){
        maxTotal = sumForEach;
        Max = &list[i];
       }
    }
    return Max;
}
