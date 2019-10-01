//
//  main.cpp
//  Merge-Sort
//
//  Created by Sanchit Gupta on 12/09/2019 .
//  Copyright © 2019 Sanchit Gupta. All rights reserved.
//

# include <iostream>
using namespace std;


void Merge(int arr[],int lb,int mid, int ub)
{
    int size_of_first_subarray = mid-lb+1;
    int size_of_second_subarray = ub - mid;
    
    // Initialize 2 subarrays
    int A[size_of_first_subarray], B[size_of_second_subarray];
    
    // Copy the values to these
    
    for(int i = 0; i<size_of_first_subarray;i++)
    {
        A[i] = arr[lb+i];
    }
    for(int j = 0; j<size_of_second_subarray;j++)
    {
        B[j] = arr[mid+1+j];
    }
    
    int i = 0;
    int j = 0;
    int k = lb;
    
    
    while(i<size_of_first_subarray && j<size_of_second_subarray)
    {
        if(A[i]<=B[j])
        {
            arr[k++] = A[i++];
        }
        else
        {
            arr[k++] = B[j++];
        }
    }
    
    for(;i<size_of_first_subarray;i++)
    {
        arr[k++] = A[i];
    }
    
    for(;j<size_of_second_subarray;j++)
    {
        arr[k++] = B[j];
    }
    
    
}

void MergeSort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid = (lb+ub)/2;
        MergeSort(arr, lb, mid);
        MergeSort(arr,mid+1,ub);
        
        Merge(arr, lb, mid, ub);
    }
}

void print_array(int arr[],int n)
{
    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int lb,ub;
    int arr[] = {10,1,4,15,17,21,43};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    lb = 0;
    ub = size - 1;
    MergeSort(arr, lb, ub);
    cout<<"Sorted Array is: "<<endl;
    print_array(arr, size);
    return 0;
    
}
