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


//perfect.
int findMovieByYear(movie movies[], int n, int year, movie* sel[]){

    int c = 0;
    for(int i = 0; i<n;i++){
        if(movies[i].year == year){
            sel[c++]=&movies[i];

        }
        
    }
    return c;

}




// maxPointer gereksiz, zaten biz tmp'yi ne için kullanıyoruz
// bu çalışır bu arada ama sadece gereksiz yere uzantırsın clean code olmaz.
customer* mostActiveCustomer(customer users[], int n){

    customer* tmp = NULL;
    int iMax = -1;
    int maxPointer = -1;
    for(int i = 0;i<n;i++){
        int counterMovies = 0;
        for(int j = 0; j<users[i].n;j++){
            counterMovies++;
        }

        if(counterMovies > iMax){
            iMax = counterMovies;
            maxPointer = i;
            
        }
    } 
    tmp = &users[maxPointer];
    return tmp;
}

/* bu daha efektif:

    customer* mostActiveCustomer(customer users[], int n){
    customer* most = NULL;
    int maxRentals = -1;

    for(int i = 0; i<n; i++){
        if(users[i].n > maxRentals){
            maxRentals = users[i].n;
            most = &users[i];
        }
    }
    return most;
}


*/





// burdkai c->title olmacak, sen 2 struct arasi islem yapiyorsun
// c->rented[i]->title, c->rented[i]->year,c->rented[i]->rented
void listRentedMovies(customer *c){
    for(int i = 0; i<c->n;i++){
        printf("%s%d rentals=%d",c->title,c->year,c->rented);
    }
}