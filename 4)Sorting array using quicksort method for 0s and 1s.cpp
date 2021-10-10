
// Sorting Array using partioning logic of Quicksort for 0s and 1s

#include<iostream>
#include<stdio.h>
using namespace std;

//Utility Function to swap arr[i] and arr[j] in array
void swap(int arr[], int i, int j)
 {
    
     int temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
 }

// Function to sort binary array in linear time
int sort(int arr[],int size)
{
    int pivot = 1;
    int j = 0;
    for (int i = 0; i < size; i++)
     {
         if (arr[i]<pivot)
         {
             swap(arr,i,j);
             j+=1;
         }
        
     }
    return 1; 
 }

 int main(void)
 {
     int arr[]={0,1,0,1,0,1,0,1};
     int size = sizeof(arr)/sizeof(int);

     sort(arr,size);
     printf("Sorted array is - ");
     for (int i = 0; i < size; i++)
     {
       printf("%d ", arr[i]);
     }
     return 0;
}



 
// Utility function to swap elements `A[i]` and `A[j]` in an array
// void swap(int A[], int i, int j)
// {
//     int temp = A[i];
//     A[i] = A[j];
//     A[j] = temp;
// }
 
// // Function to sort a binary array in linear time
// int partition(int A[], int n)
// {
//     int pivot = 1;
//     int j = 0;
 
//     // each time we encounter a 0, `j` is incremented, and
//     // 0 is placed before the pivot
//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] < pivot)
//         {
//             swap(A, i, j);
//             j++;
//         }
//     }
// }
 
// int main(void)
// {
//     int A[] = { 1, 0, 0, 0, 1, 0, 1, 1 };
//     int n = sizeof(A)/sizeof(A[0]);
 
//     partition(A, n);
 
//     // print the rearranged array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", A[i]);
//     }
 
//     return 0;
// }
