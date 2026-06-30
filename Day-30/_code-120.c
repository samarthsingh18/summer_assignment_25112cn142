//MAKE A MINI PROJECT USING ARRAY,STRING AND FUNCTION 
#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent()
{
    printf("\nEnter Roll No: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf("%s", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;

    printf("\nStudent Added Successfully!\n");
}

void displayStudent()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Records Found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found");
            printf("\nName : %s", s[i].name);
            printf("\nMarks : %.2f\n", s[i].marks);
            found = 1;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found.\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}