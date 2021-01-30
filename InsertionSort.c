#include<stdio.h>
void insertionSort(int a[], int n)
{
    int temp, i, j, min;
    for(i=0; i<n; i++)
    {
        temp = a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
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

    insertionSort(a, n);

    printf("\nSorted arrray: \n");
    display_array(a,n);

    return 0;
}
