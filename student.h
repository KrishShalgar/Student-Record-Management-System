#ifndef STUDENT_H
#define STUDENT_H

struct add {
    char name[50];
    int roll_no;
    float percentage;
    struct add *next;
};

int add(struct add **head);
int stud_add(struct add **head);
int save_students(struct add *head);
void show_data();
#endif