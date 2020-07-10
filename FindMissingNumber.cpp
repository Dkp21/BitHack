#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <array>

using namespace std; 

int missingNum(int arr[], int n) 
{
    int min = INT_MAX;

    for(int i = 0; i < n; ++i)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    int xornum = 0;

    for(int i = 0; i < n; ++i)
    {
        xornum ^= (min ^ arr[i]);
        ++min;
    }

    return xornum^min;
}

int main(int argc, char **argv) 
{ 
    int size;

    cout << "Enter size off array : ";
    
    cin >> size;
    
    int arr[size];

    cout << "Enter a range of numbers : ";

    for(int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    cout << "Missing Number : " << missingNum(arr, size) << endl;

    return 0;
}
