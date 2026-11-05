#include<stdio.h>
#include"student.h"
int save_students(struct add *head){
    FILE *file = fopen("student_data.txt","w");
    if(file == NULL){
        printf("unable to open file\n");
        return 1;
    }
    struct add *current = head;
    while(current != NULL){
        fprintf(file,"%s %d %.2f\n",current->name,current->roll_no,current->percentage);
        current = current->next;
    }
    fclose(file);
    return 0;
}