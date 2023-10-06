#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right side
        else if(key > arr[mid]){
            start = mid + 1;
        }
        // go to left side then 
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {12, 13, 14, 15, 16};

    int evenIndex = BinarySearch(even, 6, 6);
    cout << "Index of 6 is : " << evenIndex << endl;

    int oddIndex = BinarySearch(odd, 5, 11);
    cout << "Index of 11 is : " << oddIndex << endl;

    return 0;
}
