#include <stdio.h>
#include <string.h>




int bestMonth(Service sList[], int n){

    //ayların bir revenue'e eşitlemek gerek 
    // değerler int olmak zorunda değil
    // ->
    // float array,
    // içine loop'a göre ayların revenue'sini koy

    float highestMonth[4] = {0.0,0.0,0.0,0.0};
    int best = 0;
    for(int i = 0;i<n;i++){
        int month;
        sscanf(sList[i].date,"%*d/%d/%*d",&month);
        highestMonth[month -1] = sList[i].revenue;

    }
    for(int i = 0; i<4;i++){
        if(highestMonth[i] >highestMonth[best]){
            best = i;
        }


    }
    return best;


}


char* bestOperator(Service sList[], int n){
    

    int iMax = 0;
    for(int i=0; i<n;i++){
        if(sList[i].revenue >= sList[iMax].revenue){

            iMax = i;
            
        }
        
        

    }
    return sList[iMax].operatorID;
}





int bestMonth(Service sList[], int n){

    //ayların bir revenue'e eşitlemek gerek 
    // değerler int olmak zorunda değil
    // ->
    // float array,
    // içine loop'a göre ayların revenue'sini koy

    float Months[4] = {0.0,0.0,0.0,0.0};

    for(int i=0; i<n;i++){
        int month = 0; // max 4 tane alicak zaten.
        sscanf(sList[i].date,"%*d/%d/%*d",&month);
        Months[month-1] = sList[n].revenue;

        

    }
    int best = 0;
    for(int j = 0; j<4;j++){
        
        if(Months[j]>Months[best]){
            best = j;
        }
    }
    return best,

}
