//
//  main.cpp
//  Fibonacci Series Using DP
//
//  Created by Sanchit Gupta on 22/09/2019 .
//  Copyright © 2019 Sanchit Gupta. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int f[10],n;
    f[0] = 0;
    f[1] = 1;
    cout<<"Enter Size: ";
    cin>>n;
    for(int i = 2; i<=n;i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    
    for (int i = 0;i<n;i++)
    {
        cout<<f[i]<<"\t";
    }
    cout<<endl;
    return 0;
        
}
