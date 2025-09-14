#include <stdio.h>
#include <string.h>

/*
typedef struct {
    char id[10];     // unique alphanumeric ID (≤ 9 chars + '\0')
    int  goals;      // total goals scored
    int  matches;    // number of matches played
} player;
*/


int selectedScorers(player roster[], int n, int minGoals, player* ref[]){
    int counter = 0;
    for(int i = 0; i<n; i++) {
        if(roster[i].goals >= minGoals){
            ref[counter++] = &roster[i];

        }
    }
    return counter;
}

player* topEfficiency(player roster[], int n){
    float ratio;
    float ratioMax = 0.0;
    player* tmp = NULL;

    for(int i = 0; i<n;i++){
        ratio = (float) roster[i].goals/(roster[i].matches +1);
        
            if(ratio >= ratioMax){
                ratioMax = ratio;
                tmp = &roster[i];

        
            } 
            

    }
    return tmp;

}

void sortByRanking(player* ref[], int m) {
    int iMax = 0;
    

    for(int i = 0; i<m -1 ; i++){
        iMax = i;
        for(int j = i+1; j<m; j++){
            if(ref[j]->goals > ref[iMax]->goals ||
             ref[j]->goals == ref[iMax]->goals && ref[j]->matches < ref[iMax] ->matches ||
             // burdan sonrasındaki kısımda parantez atmayı unutma
             (ref[j]->goals == ref[iMax]->goals && ref[j]->matches == ref[iMax]->matches && strcmp(ref[j]->id,ref[iMax]->id)<0)){
                iMax = j;
             }

        }

    player* tmp = ref[i];
    ref[i] = ref[iMax];
    ref[iMax] = tmp;
    }

}
