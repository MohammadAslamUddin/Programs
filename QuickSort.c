#include<stdio.h>
void partition(int a[30], int low, int high)
{
    int i,j,pivot,temp;

    if (low<high)
    {
        pivot=low;
        i= low;
        j= high;

        while(i<j)
        {
            while(a[i]<=pivot && i<high){
                i++;
            }
            while(a[j]>a[pivot])
            {
                j--;
            }
            if(i<j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        partition(a, low, j-1);
        partition(a, j+1, high);
    }
}

int main()
{
    int i, n, a[30];

    printf("Enter the number of element: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    partition(a, 0, n-1);

    printf("Here is the sorted elements: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
