#include <stdio.h>
#include <conio.h>
struct student
{
    char name[25];
    int age, marks[5];
};
int main()
{
    // clrscr();
    struct student std[3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Enter student name: ");
        gets(std[i].name);
        printf("Enter student age: ");
        scanf("%d", std[i].age);
        for (j = 0; j < 5; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &std[j].marks);
        }
        fflush(stdin);
    }
    printf("Student Ditails:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Name : %s\n", std[i].name);
        printf("Age : %d", std[i].age);
        for (j = 0; j < 5; j++)
        {
            printf("Marks : %d", std[j].marks);
        }
        printf("\n");
    }
    getch();
    return 0;
}
