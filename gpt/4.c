#include <stdio.h>
#include <string.h>


int findBigSpenders(student list[], int n, float threshold, student* sel[]){
    int counter = 0;
    for(int i = 0; i<n;i++){
        float eachSum = 0.0;
        for(int j = 0; j<list[i].n;j++){
            eachSum += list[i].history[j].price;

        }

        if(eachSum >= threshold){
            sel[counter++]=&list[i];
        }
    }

    return counter;
}


// if it's saying pointer to student and if the student is a struct than
//create the function root(int float char) by that.

// nested loop
// öğrenci başı sum
// öğreni başı sumların karşılaştırılması, by another float var
// ardından seçilen en yükseğin pointer'a atanması
//
student* richestStudent(student list[], int n){
    float total = -1;
    student* most = NULL; 
    int iMax = 0;
    for(int i = 0; i<n; i++){
        float eachsum = 0.0;
        for(int j = 0; j<list[i].n;j++){
            eachsum += list[i].history[j].price;

        }

        if(list[i].n > 0 && eachsum > total){
            total = eachsum;
            iMax = i;
        } 

    }
    most = &list[iMax];
    return  most;

}