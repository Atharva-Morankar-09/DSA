#include <stdio.h>


int sumpair(int arr[], int size, int sum)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {

                printf("(%d,%d) ", arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int sum=8 , arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(int);
    // printf("Enter the elements of array : ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // printf("");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    //  cout<<"Enter the sum for which you want to find the pair : \n";
    //  cin>>sum;

    printf("THE PAIRS OF NUMBERS GIVING REQUIRED SUM IS ");
    sumpair(arr, size, sum);
    return 0;
}