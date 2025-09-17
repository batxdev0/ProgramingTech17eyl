
/*

typedef struct {
    char destination[30];  // destination city
    int days;              // duration of the trip in days
    int cost;              // total cost in euros
} trip;

typedef struct {
    char clientID[8];      // unique client code
    trip* booked;          // pointer to an array of trips
    int n;                 // number of trips booked
} client;


*/

void groupClients(client customers[], int n, int counters[4]) {

    //create the groups;
    for(int i = 0; i<4;i++){
        counters[i] = 0;
    }

    int groupValues = 0;

    for(int i = 0; i<n; i++) {
        groupValues = customers[i].n / 5;
        
        if(groupValues >= 3){
            customers[3]++;
        } else {
            customers[i]++;
        }



    }

        
}

void mostExpensiveTrip(client customers[], int n, trip* best[]){
    
    trip* maxBook = NULL;
    for(int i = 0; i<n; i++){
        maxBook = &customers[i].booked[0];
        for(int j = 0; j<customers[i].n;j++){
            if(customers[i].booked[j].cost > best[i]->cost){
                maxBook = customers[i].booked[j];
            }
        }

        best[i] = maxBook;

    }

}