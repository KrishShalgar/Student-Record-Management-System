#include<stdio.h>
#include<string.h>
#include"student.h"
int main(){
    struct add *head = NULL;
    char command[5];
    while(1){
        printf("student record menu\n");
        printf("A/a : Add New Record\n");
        printf("D/d : Delete A Record\n");
        printf("S/s : Show the List\n");
        printf("M/m : Modify A Record\n");
        printf("V/v : Save\n");
        printf("E/e : Exit\n");
        printf("T/t : Sort the List\n");
        printf("L/l : Delete All the Records\n");
        printf("R/r : Reverse the List\n");
        printf("Enter Your Choice:\n");
        if(fgets(command,sizeof(command),stdin) == NULL){        //to check if the input is empty or not
            printf("enter valid character\n");
            return 0;
        }
        int len = strcspn(command,"\n");        
        if(command[len] == '\n'){
            command[len] = '\0'; 
        }else if(len == sizeof(command)-1){     
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {
            // Discard the character
        }
        printf("invalid input\n");
        if(ch == EOF){
            return 0;
        }
        continue;
        }else{
            command[len] = '\0';
            return 0;
        }
        if(strcmp(command,"A")==0 || strcmp(command,"a")==0){
            int val = add(&head);
            if(val){
                printf("successfully added\n");
            }else{
                printf("failed to add\n");
            }
        }else if(strcmp(command,"D")==0 || strcmp(command,"d")== 0){

        }else if(strcmp(command,"S")==0 || strcmp(command,"s")== 0){

        }else if(strcmp(command,"M")==0 || strcmp(command,"m")== 0){

        }else if(strcmp(command,"V")==0 || strcmp(command,"v")== 0){

        }else if(strcmp(command,"E")==0 || strcmp(command,"e")== 0){
            return 0;
        }else if(strcmp(command,"T")==0 || strcmp(command,"t")== 0){

        }else if(strcmp(command,"L")==0 || strcmp(command,"l")== 0){

        }else if(strcmp(command,"R")==0 || strcmp(command,"r")== 0){

        }else {
            printf("Record Not Found\n");
        }
    }
}
