#include<stdio.h>

void array(int a[],int n)
{
    int i;
    printf("Enter %d elements: \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display_array(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
void bubble_sort(int a[], int n)
{
    int i,j,flag,temp;
    for(i=0; i<n-1; i++)
    {
        flag = 0;
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
int main()
{
    int a[50],n;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    array(a,n);
    printf("Given array values are:\n");
    display_array(a, n);

    bubble_sort(a, n);

    printf("\nSorted array values are:\n");
    display_array(a, n);

    return 0;
}
