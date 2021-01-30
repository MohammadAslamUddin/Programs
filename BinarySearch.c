#include<stdio.h>
int main()
{
    int a[50], n, data, first, last, mid, i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The sorted array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEnter the value for search: ");
    scanf("%d", &data);

    first = 0;
    last = n-1;
    while(first <= last)
    {
        mid = (first+last)/2;
        if(data==a[mid])
        {
            printf("The position of %d is %d", data, mid+1);
            break;
        }
        else if(data<a[mid])
            last = mid-1;
        else
            first = mid+1;
    }
    if(first>last)
        printf("The value is not in the array list");
    return 0;
}
