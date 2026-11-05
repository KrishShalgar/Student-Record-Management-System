#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"student.h"
int stud_add(struct add **head){
    struct add *n = (struct add *)malloc(sizeof(struct add));
    
    if(n == NULL){  //checking if we can allocate memory or not
        printf("student allocation failed\n");
        return 0;
    }
    // taking the input from the user
    printf("enter the name\n");
    fgets(n->name,sizeof(n->name),stdin);

    //taking the percentage input
    printf("enter the percentage\n");
    //to check if the input percentage is valid
    if (scanf("%f", &n->percentage) != 1) {
    printf("Invalid percentage\n");
    free(n);
    return 0;
    }
    if(n->percentage < 0 || n->percentage > 100){
        printf("invalid percentage\n");
        free(n);
        return 0;
    }
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        //to remove the \n from the scanf
    }
    n->name[strcspn(n->name,"\n")]='\0';

    //giving the smallest roll number
    int candidate = 1;
    int found;
    do{
    struct add *temp = *head;
    found = 0;
    while(temp != NULL){
        if(temp->roll_no == candidate){
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if(found){
        candidate++;
    }
    }while(found);
    n->roll_no = candidate;

    //inserting the new node
    n->next = NULL;
    if(*head == NULL){
        *head = n;
    }else{
        struct add *temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
    return 1;
}
int add(struct add **head){
    return stud_add(head);
}