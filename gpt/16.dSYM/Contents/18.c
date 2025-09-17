#include <string.h>
#include <stdio.h>


int bestMonth(Service services[], int nService) {

   float bestMonth[4]= {0.0,0.0,0.0,0.0};

   for(int i = 0; i<4; i++){
    int month;
    sscanf(services[i].date,"%*d/%d/%*d",&month);
    bestMonth[month-1] += services[i].revenue;
   }

   int iMax = 0;

   for(int i = 0; i<4; i++){
    if(bestMonth[i] > bestMonth[iMax]) {
        iMax = i;
    }

   }

   return iMax;

}


char* bestOperator(Service services[], int n){
    service* tmp = NULL;

    int maxIndex = 0;

    for(int i = 0; i<4; i++) {
        if(services[i].revenue > services[maxIndex].revenue);
        maxIndex = i;

    }
    tmp = services[maxIndex];

    return tmp->operatorID // veya return services[maxIndex].operatorID;

}