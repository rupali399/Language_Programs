#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char firstname[50];
    char lastname[50];
    int id;
    float cgpa;
};

struct teacher
{
    char firstname[50];
    char lastname[50];
    char subject[50];
    float salary;
};

struct staff
{
    char firstname[50];
    char lastname[50];
    int salary;
};

int main()
{
    struct student *s;
    
    int n, n1, n2, id;
    char firstname[50], lastname[50], subject[50];
    float cgpa, salary;

    FILE *fptr;
    fptr = fopen("data.txt", "w");

    printf("enter the number of student whose  you want to fill data : \n");
    scanf("%d", &n);

    s = (struct student *)malloc(n * sizeof(struct student));

    printf("enter student first name, last name, id and cgpa\n");

    fprintf(fptr, "\n%s\t\t", "Student first name");
    fprintf(fptr, "%s\t\t", "Student last name");
    fprintf(fptr, "%s\t\t", "Student id");
    fprintf(fptr, "%s\n", "Student cgpa");

    for(int i = 0; i < n; i ++)
    {
        scanf("%s", &firstname);
        strcpy(s[i].firstname, firstname);
        fprintf(fptr, "%s\t\t\t\t\t", firstname);

        scanf("%s", &lastname);
        strcpy(s[i].lastname, lastname);
        fprintf(fptr, "%s\t\t\t\t\t", lastname);

        scanf("%d", &id);
        s[i].id = id;
        fprintf(fptr, "%d\t\t\t\t", id);

        scanf("%f", &cgpa);
        s[i].cgpa = cgpa;
        fprintf(fptr, "%f\n", cgpa);
    }

    struct teacher *t;
    
    printf("enter the number of teacher whose  you want to fill data : \n");
    scanf("%d", &n1);

    t = (struct teacher *)malloc(n1 * sizeof(struct teacher));

    printf("enter teacher first name, last name, subject and salary\n");

    fprintf(fptr, "\n%s\t\t", "Teacher first name");
    fprintf(fptr, "%s\t\t", "Teacher last name");
    fprintf(fptr, "%s\t\t", "Teacher subject");
    fprintf(fptr, "%s\n", "Teacher salary");

    for(int i = 0; i < n1; i ++)
    {
        scanf("%s", &firstname);
        strcpy(t[i].firstname, firstname);
        fprintf(fptr, "%s\t\t\t\t\t", firstname);

        scanf("%s", &lastname);
        strcpy(t[i].lastname, lastname);
        fprintf(fptr, "%s\t\t\t\t\t", lastname);

        scanf("%s", &subject);
        strcpy(t[i].subject, subject);
        fprintf(fptr, "%s\t\t\t\t\t", subject);

        scanf("%f", &salary);
        t[i].salary = salary;
        fprintf(fptr, "%f\n", salary);
    }

    struct staff *st;

    printf("enter the number of staff whose  you want to fill data : \n");
    scanf("%d", &n2);

    st = (struct staff *)malloc(n2 * sizeof(struct staff));

    printf("enter staff first name, last name and salary\n");

    fprintf(fptr, "\n%s\t\t", "Staff first name");
    fprintf(fptr, "%s\t\t", "lastname");
    fprintf(fptr, "%s\n", "Staff salary");

    for(int i = 0; i < n2; i ++)
    {
        scanf("%s", &firstname);
        strcpy(st[i].firstname, firstname);
        fprintf(fptr, "%s\t\t\t\t\t", firstname);

        scanf("%s", &lastname);
        strcpy(st[i].lastname, lastname);
        fprintf(fptr, "%s\t\t\t", lastname);

        scanf("%f", &salary);
        st[i].salary = salary;
        fprintf(fptr, "%f\n", salary);
    }

    fclose(fptr);

    return 0;
}
