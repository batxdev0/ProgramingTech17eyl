#include <stdio.h>
#include <string.h>


// struct student ->matricola ->passedExams
// struct exam -> examName -> score
//struct exam ->score -> between 18-31
// score 31 is equal "30 cum laude"

typedef struct student {
    char matricola[12];
    exam* passedExams;
    int nExams;
};

typedef struct exam; {
    char examName[20];
    int score;
};
int readStudents(student lstud[],int n, char *filename){

    int counter = 0;
    FILE* fp = fopen(filename,"r");
    if (fp == NULL){
        printf("file cannot be opened");
    } else {
        while (counter<n && fscanf(fp,"%s %d",lstud[counter].matricola, &lstud[counter].nExams) != 2)
        {
            for(int j = 0; j<lstud[counter].nExams ;j++){
                fscanf(fp,"%s %d",lstud[counter].passedExams[j].examName,&lstud[counter].passedExams[j].score);
            }
            counter++;
        }

        fclose(fp);
        return counter;
        
    }

}

int selectBest(student lstud[],int numberofStudents,student* rStud[], int passexms){

    int counter = 0;
    for(int i = 0;i<numberofStudents;i++){
        int laude = 0;
        for(int j = 0; j<lstud[i].nExams;j++){
            if(lstud[i].passedExams[j].score == 31){
                laude++;
            }
       
        } if(laude >= passexms){
            counter++;
            rStud[counter] = &lstud[i]
        }
    }
    return counter;
}



//✅
void printBestStudents(student* rstud, int nBestStudents){
    for(int i = 0; i<nBestStudents;i++){
        printBestStudents("%s",rstud[i]->matricola);
    }
}

int main(){



}