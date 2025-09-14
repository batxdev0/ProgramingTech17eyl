
 6 EXERCISE 6 (8 points)    USE YOUR OWN PAPER!!!  
 
In a C program, a student  and a passed exam are  respectively represented by the following struct s: 
 
typedef struct {  
   char matricola[7];      // matricola ID  
   exam* array_of_exams;  // pointer to the array of passed exams  
   int n;                 // number of passed exams, stored in array_of_exams  
} student; 
 
typedef struct {  
   char subject[30];      // name of the subject  
   int score;             // obtained score, in the 0 to 100 range 
} exam; 
 
Assume that the data about a course with  300 students and of  their respective passed exams have already been  
read from an input file, and the array  
student s[300];  
has been initialized accordingly. For simplicity, assume that all the students have passed at least one exam.  
 
1)   Write a function groupStudents  that takes as input : the array of students s, its dimension n,  and  an  integer 
array counters  of  size 10. The function should group the students based on the number of passed exams. 
Specifically: group 0  for students with fewer than 10 exams , group 1 with  10 to 19 exams , group 2  with 20 to 29 
exams , etc . The last group, group 9, includes students with at least 90 passed exams. The function counts the 
number of students in each group and stores these counts in the array counters , where each index represents a 
group.   
The function should have  exactly  the following prototype:  
 
void groupStudents (student s[], int n , counters[10] ); 
 
2)   Write a  function bestExams  that takes as input: the array of students s, its dimension n,  and an array best 
of  pointers to exam . For each student, the function computes the pointer to the exam with the maximum score 
and stores it in best[i] for the i -th student. For simplicity, assume there are no ties for the maximum score.  
The function should have exactly  the following prototype:  
 
void bestExams (student s[], int n , exam* best[]); 
 
NB. You are required to implement only the given function s, and not the whole C program . YOU CANNOT  use 
dynamic allocation , or variable length arrays ! 
 
void groupStudents(student s[], int n, int counters[10]) {  
    int i, group;  
    // Initialize counters to zero  
    for (i = 0; i < 10; i++)  
        counters[i] = 0;  
    // Count each student in the appropriate group  
    for (i = 0; i < n; i++) {  
        group = s[i].n / 10;  
        if (group > 9)  
            group = 9; // Cap at group 9 for students with >= 90 exams  
        counters[group]++;  
} 
 
void bestExams(student s[], int n, exam* best[]) {  
    int i,j;  
    exam* maxEsam;  
    for (i = 0; i < n; i++) {  
        maxExam = &s[i].array_of_exams[0];  
        for (j = 1; j < s[i].n; j++)  
 7             if (s[i].array_of_exams[j].score > maxExam ->score)  
                maxExam = &s[i].array_of_exams[j];  
        best[i] = maxExam;  
    } 
} 
 