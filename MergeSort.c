#include<stdio.h>

void mergeSort(int a[], int low, int high);
void merge(int a[], int low, int mid, int high);

int main(){
    int a[100], i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements for merge Sort:\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n-1);
    
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void mergeSort(int a[], int low, int high){
    int mid;

    if (low < high)
    {
        mid = (low+high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

void merge(int a[], int low, int mid, int high){
    int temp[100];
    int i = low, j = mid+1, k = 0;

    while (i <= mid && j <= high)       
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }else
        {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= high)
    {
        temp[k++] = a[j++];
    }
    for (i = low, j = 0; i <= high; i++,j++)
    {
        a[i] = temp[j];
    }
}