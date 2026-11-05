#include<stdio.h>
#include"student.h"
void show_data(){
    char name[50];
    int roll_no;
    float percentage;
    char line[100];
    FILE *file = fopen("student_data.txt","r");
    if(file == NULL){
        printf("unable to open file\n");
        return;
    }
    printf("%-20s %-10s %-10s\n", "Name", "Roll No", "Percentage");
    while(fgets(line,sizeof(line),file)!= NULL){
        sscanf(line,"%49s %d %f",name,&roll_no,&percentage);
        printf("%-20s %-10d %-10.2f\n",name,roll_no,percentage);
    }
    fclose(file);
    return;
}