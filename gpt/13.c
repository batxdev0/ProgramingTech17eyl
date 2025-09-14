#include <stdio.h>
#include <string.h>


void groupMembers(member users[], int n, int counters[10]){

   

    //create a loop in counter for the counter;
    int ctr = 0;
    for(int i = 0; i<10; i++){
        counters[i] = 0;
    }
    // add them to group, how you can find the group?
    // number of books divided by 10; give us the approx val. for groups.
    for(int j = 0; j<n; j++){
        int group = users[j].n / 5;
        if(group > 9){
            group = 9;
            counters[group]++;
        } else {
            counters[group]++;

        }
    }

}

// in this type of questios we are creating an inital candidate.
// not an initial value. they are different.
void longestBook(member users[], int n, book* best[]){
    //each member, they borrowed for max days
    // for each user get into the book array and fetch max days;
    book* maxBook = NULL;
    int counter = 0;
    for(int i = 0; i<n; i++){
        maxBook = &users[i].borrowed[0];
        for(int j = 1; j<= users[i].n; j++){
            if(users[i].borrowed->days[j] > maxBook->days){
                maxBook = &users[i].borrowed[j];


            }

        }
        best[i] = maxBook;
    }
}
