#include <stdio.h>
#include <conio.h>
struct emp
{
    int eid, eage;
    float esal;
    char ename[25], edpt[20], eadd[50];
};
int main()
{
    struct emp e[10];
    int i, search_id, found = 0;
    printf("Enter details of 10 employees:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &e[i].eid);
        printf("Enter Employee Name: ");
        gets(e[i].ename);
        printf("Enter Employee Age: ");
        scanf("%d", &e[i].eage);
        printf("Enter Employee Department: ");
        gets(e[i].edpt);
        printf("Enter Employee Address: ");
        gets(e[i].eadd);
        printf("Enter Employee Salary: ");
        scanf("%f", &e[i].esal);
    }
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &search_id);
    for (i = 0; i < 3; i++)
    {
        if (e[i].eid == search_id)
        {
            found = 1;
            printf("\nEmployee Details:\n");
            printf("Employee ID: %d\n", e[i].eid);
            printf("Employee Name: %s\n", e[i].ename);
            printf("Employee Age: %d\n", e[i].eage);
            printf("Employee Department: %s\n", e[i].edpt);
            printf("Employee Address: %s\n", e[i].eadd);
            printf("Employee Salary: %.2f\n", e[i].esal);
            break;
        }
    }
    if (!found)
    {
        printf("\nEmployee with ID %d not found.\n", search_id);
    }
    return 0;
}
