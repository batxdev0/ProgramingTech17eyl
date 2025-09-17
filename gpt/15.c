#include <stdio.h>
#include <string.h>


int selectLowCal(dish menu[], int n ,int maxCal, dish* ref[]){
    
    int counter = 0;
    for(int i = 0; i<n ;i++){
        if(menu[i].calories <= maxCal){
            ref[counter++] = &menu[i];

        }
    }
    return counter;


}


dish* bestPrefix(dish menu[], int n, char* prefix){
    // first check the ones with the ok prefix,

    int MaxCalories = 0;
    dish* arraySelect = NULL;
    int selectDish = 0;
    for(int i = 0; i<n;i ++){
        char* firstPrefix = &menu[i].name;
        
        // after that create an if statement if it's ok add to the pointer;
        if(menu[i].calories >= MaxCalories){
            MaxCalories = menu[i].calories;
        }

        if(MaxCalories == menu[i].calories && firstPrefix = prefix){
            arraySelect = & menu[i];


        } else{
            continue;
        }

        
    }
    return arraySelect;
    
    
}

void sortByCalorieName(dish* ref[], int m){
    int iMax = 0;
    dish* tmp = NULL;
    for(int i = 0; i<m -1; i++){
        int iMax = i;
        for(int j = i+1; j<m; j++){
            if(ref[j]->calories > ref[iMax] ->calories || 
            (ref[j]->calories == ref[iMax]->calories &&
             strcmp(ref[j]->name,ref[iMax]->name)<0)|| 
            (ref[j]->calories == ref[iMax]->calories &&
             strcmp(ref[j]->name,ref[iMax]->name) == 0 &&
             strcmp(ref[j]->code,ref[iMax]->code)<0)){
                iMax = j;
            }
        }
        tmp = ref[i];
        ref[i] = ref[iMax];
        ref[iMax] = tmp;

    }

}