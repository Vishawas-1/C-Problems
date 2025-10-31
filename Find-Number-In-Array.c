#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100],n,i,j,num,temp,found=0;
    //clrscr();
    printf("\nEnter no. of element in this array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the no. to search: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            printf("\nNumber %d is found on position %d",num,i+1);
            found=1;
        }
    }
    if (found!=1)
    {
        printf("\nNumber %d is not found in this array.",num);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nShorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}
