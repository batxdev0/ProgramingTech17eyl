#include <stdio.h>
#include <string.h>

/*

typedef struct {
    char id[10];     // unique alphanumeric ID (≤ 9 chars + '\0')
    int  salary;     // monthly salary in euros (≥ 0)
    int  years;      // years of service in the company (≥ 0)
} employee;


*/

int selectVeterans(employee staff[], int n, int minYears, employee* ref[]){

    int counter = 0;

    for(int i = 0; i <n; i++) {

        if(staff[i].years >= minYears){ // tek hatan '>' kullanman, '>=' kullanman gerekirdi.
            ref[counter++] = & staff[i];

        }
        
    }

    return counter;

}

employee* bestemployee(employee staff[], int n){
    
    employee *bestid = NULL;
    int bestId = 0; 
    float bestRatio;
    float ratio = 0.0;

    for(int i = 0;i<n;i++){
        bestRatio = (float) staff[i].salary/(staff[i].years +1);
        if(ratio > bestRatio){
            bestRatio = ratio;
            bestId = &staff[i];
        }
    }
    return bestId;
}


void sortBySalaryDesc(employee* ref[], int m){
    employee *tmp = NULL;
    int iMax = -1;
    for(int i = 0; i<m-1;i++){
        iMax = i;
        for(int j = 1; j<m; j++){
            //öncelikle sen inner loop'da işlem yapiyorsun i ne alaka, i yi iMax'ı bulduktan sonra koyucan.
            if(ref[j]->salary > ref[iMax]->salary ||
            ref[j]->salary == ref[iMax] -> salary && ref[j]->years < ref[iMax] -> years || 
            (ref[j]->salary == ref[iMax]->salary && ref[j] -> years == ref[iMax] -> years &&
            strcmp(ref[j]->id, ref[iMax]->id) <0)){
                iMax = i;
            }
        }

    }
    tmp = ref[i];
    ref[i] = ref[iMax];
    ref[iMax] = tmp;
    
}


/*
for (int j = i + 1; j < m; j++) {
            if (ref[j]->salary > ref[iMax]->salary ||
                (ref[j]->salary == ref[iMax]->salary && ref[j]->years < ref[iMax]->years) ||
                (ref[j]->salary == ref[iMax]->salary && ref[j]->years == ref[iMax]->years &&
                 strcmp(ref[j]->id, ref[iMax]->id) < 0)) {
                iMax = j;
            }
            */