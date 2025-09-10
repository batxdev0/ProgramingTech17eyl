#include <stdio.h>
#include <string.h>

/*

typedef struct {
    char title[40];    // movie title (no spaces, max 39 chars)
    int year;          // release year
    int rented;        // 1 if currently rented, 0 if available
} movie;

typedef struct {
    char customerID[12]; // unique identifier
    movie* rentals[10];  // pointers to movies currently rented (max 10)
    int n;               // number of movies currently rented
} customer;


*/


int findMovieByYear(movie movies[], int n, int year, movie* sel[]){
    int moviecounter = 0;
    for(int i = 0; i<n; i++){
        if(movies[i].year == year){
            sel[moviecounter++]=&movies[i];
        }


    }
    return moviecounter;
}

customer* mostActiveCustomer(customer users[], int n){
    int total = -1;
    int iMax = -1;
    customer* tmp = NULL;
    for(int i = 0; i<n; i++){
        int counter = 0;
        for(int j = 0; j<users[i].n; j++){
            if(users[i].rentals[j].rented = 1){
                counter++;

            }
        }
        if(users[i].n> 0 && counter > total){
            total = counter;
            iMax = i;

        }
    }
    tmp = &users[iMax];
    return tmp;


}

void listRentedMovies(customer* c){

}
