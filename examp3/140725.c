#include <stdio.h>
#include <string.h>


char* bestMonth(Service slist[], int numberofservice){
    float monthlyrevenue[4] = {0.0,0.0,0.0,0.0};
    for(int i = 0; i< numberofservice;i++){
        int month;
        sscanf(slist[i].date,"%*d/%d/%*d",&month);
        monthlyrevenue[month - 1] += slist[i].revenue;
    }
    int iMax = 0;
    for(int i = 0; i<4;i++){
        if(monthlyrevenue[i]>monthlyrevenue[iMax]){
            iMax = i;
        }
    }
    return iMax;
    
}

int bestOperator(Service slist[], int numberofservice){
    int iMax = 0;
    for(int i = 0; i<numberofservice;i++){
        if(slist[i].revenue > slist[iMax].revenue){
            iMax = i;
        }


    }
    return iMax;

}