// Link for implementation: https://www.geeksforgeeks.org/bubble-sort/

#include<stdio.h>
//#include "stdc++.h"

void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void bubbleSort(int arr[], int n)
{
    int i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for(int i=0;i<size;i++)
    {
        printf("%d", arr[i]);
        printf("\n"); //new line 
    }
}


int main()
{
    int arr[]={5,6,4,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printf("Sorted Array: \n");
    printArray(arr,n);
    return 0;
}
