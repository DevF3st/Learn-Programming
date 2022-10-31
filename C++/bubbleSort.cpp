//Sorting elements of Array in ascending order using Bubble sort in java
//Number of rounds = n-1  , where n is number of elements in array

#include <iostream>
using namespace std;

void bubbleSort(int array[] ,int n) {
		int i,j,flag;
		   for(i=0; i<n; i++) {
			    flag =0;            // for the case when array is sorted before completion of all the rounds
			for(j=0; j< n-1-i; j++) {
				if(array[j] > array[j+1]) {
					int temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp;
					flag = 1;
				}
				}
			if(flag == 0)
				break;
			}
			
}

int main()
{
    int i;
	int arr[] = {32,19,26,12,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	
  cout<<"Array Before Sorting...";
			 for(i=0; i<n; i++)
				cout<<arr[i]<< " ";
			cout << endl;
			  
        bubbleSort(arr,n);
			 cout<<"Array After Sorting...";
	        for(i=0; i<n; i++)
		         cout<<arr[i]<< " ";

	return 0;
}

//Best case Time complexity :-  O(n)
//Avg case Time complexity :-  O(n²)
//Worst case Time complexity :-  O(n²)

//Space complexity :-  O(1)
