#include<stdio.h>
void selectionSort(int a[], int n)
{
    int temp, i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j] < a[min] )
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }


    }

}
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
int main()
{
    int a[50],n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    array(a,n);

    printf("Unsorted array: \n");
    display_array(a,n);

    selectionSort(a, n);

    printf("\nSorted arrray: \n");
    display_array(a,n);

    return 0;
}
