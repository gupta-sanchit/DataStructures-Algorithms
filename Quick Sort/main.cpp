//
//  main.cpp
//  Quick Sort
//
//  Created by Sanchit Gupta on 02/10/2019 .
//  Copyright © 2019 Sanchit Gupta. All rights reserved.
//

#include<iostream>

using namespace std;


void swap_values(int& a, int& b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

int partition(int arr[],int lb, int ub)
{
    int i = lb;
    int j = ub+1;
    int pivot = arr[lb];
    
    while(i<j)
    {
        do
        {
            i++;
        }while(arr[i]<=pivot);
        
        do
        {
            j--;
        }while(arr[j]>pivot);
        
        if (i<j)
        {
            swap_values(arr[i],arr[j]);
        }
    }
    swap_values(arr[lb], arr[j]);
    return j;

}

void quicksort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int pivot_location = partition(arr,lb,ub);
        quicksort(arr,lb,pivot_location);
        quicksort(arr,pivot_location+1,ub);
    }
    
}

void print_array(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
}

int main()
{
    
    int arr[] = {9,10,7,4,3,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int lb = 0;
    int ub = size - 1;
    
    quicksort(arr, lb, ub);
    
    cout<<"The Sorted Array is :"<<endl;
    print_array(arr, size);
    
    return 0;
    
}
