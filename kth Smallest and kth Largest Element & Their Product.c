#include<stdio.h>

int main()
{
    int n, i, j, temp, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Bubble sort in ascending order
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Validate k
    if(k <= 0 || k > n)
    {
        printf("Invalid value of k.");
        return 1;
    }

    int kth_smallest = a[k - 1];
    int kth_largest = a[n - k];
    int product = kth_smallest * kth_largest;

    printf("kth smallest element = %d\n", kth_smallest);
    printf("kth largest element = %d\n", kth_largest);
    printf("Product = %d\n", product);

    return 0;
}
