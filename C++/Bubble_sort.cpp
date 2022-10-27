BUBBLE SORT CODE : 


#include<bits/stdc++.h>
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }

using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag;
    // Outer pass
    for(i = 0; i < n; i++)
    {
        flag = false;   // Set flag as false
        for(j = 0; j < n-i-1; j++)
        {
            // Compare values
            if( arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        // If no to elements are swapped then
        // array is sorted. Hence Break the loop.
        if(!flag)
        {
            break;
        }
    }
}
int main(int argv, char* argc[])
{
    cout<<"Enter the total number of elements : ";
    int total;
    cin>>total;
    int arr[total];
    for(int i=0;i<total;i++)
    {
        cout<<"Element "<<i<<" : ";
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(int);
    cout<<"Unsorted Array :";
    for(int i=0;i<n;i++)                            // Print the Original Array
        cout<<arr[i]<<" ";
    cout<<endl;
    bubbleSort(arr,n);                              // Call for Bubble Sort Function
    cout<<"Sorted Array :";
    for(int i=0;i<n;i++)                            // Print the Sorted Array
        cout<<arr[i]<<" ";
    return(0);
}
