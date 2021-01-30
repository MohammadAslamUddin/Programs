#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int arr[], int n, int i)
{
    int max = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < n && arr[leftChild] > arr[max])
        max = leftChild;

    if (rightChild < n && arr[rightChild] > arr[max])
        max = rightChild;

    if (max != i)
    {
        swap(&arr[i], &arr[max]);
        heapify(arr, n, max);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
int main()
{
    int arr[30], n;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    array(arr, n);

    printf("Original array:\n");
    display(arr, n);
    heapSort(arr, n);

    printf("Sorted array:\n");
    display(arr, n);
}
