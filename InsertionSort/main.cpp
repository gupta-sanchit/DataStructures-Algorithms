//
//  main.cpp
//  InsertionSort
//
//  Created by Sanchit Gupta on 03/10/2019 .
//  Copyright © 2019 Sanchit Gupta. All rights reserved.
//

#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

void insertion_sort(int arr[], int lb, int ub)
{
    
    for(int i = lb; i<=ub; i++)
    {
        int key = arr[i];
        int j = i-1;
        
        while(j>=0 && key<=arr[j])
        {
            swap(arr[j],arr[j+1]);
            j--;
        }
                
    }
}

void print_array(int arr[],int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {10,5,2,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"The Input Array is: "<<endl;
    print_array(arr, size);
    
    insertion_sort(arr, 0, size-1);
    
    cout<<"\nThe Sorted Array is: "<<endl;
    print_array(arr, size);
    

    return 0;
    
}
