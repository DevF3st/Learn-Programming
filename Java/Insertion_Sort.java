//Sorting the user given array in Ascending Order using insertion sort

import java.util.Scanner;
 
public class InsertionSort {
	
	void insertionSort(int[] array) {
		int temp;
		   for(int i=1; i<array.length; i++) {
			temp = array[i];
			int j=i;
			while(j>0 && array[j-1]>temp) {
				array[j] = array[j-1];
				j = j-1;
			}
			array[j] = temp;
		}
}

	public static void main(String[] args) {
	    InsertionSort is = new InsertionSort();
	    Scanner sc=new Scanner(System.in);  
	    
		System.out.print("Enter the number of elements you want to store: ");  
		int n=sc.nextInt();
		
		int[] arr = new int[n]; 
		System.out.println("Enter the elements of the array in any order: ");  
		for(int i=0; i<n; i++)  
	          arr[i]=sc.nextInt();  
	
       System.out.println("Array Before Sorting...");
		for(int i:arr)
			System.out.print(i+ " ");
		System.out.println();
		
		 System.out.println(" Array After Sorting...");
                is.insertionSort(arr);
                      for(int i:arr)
	                     System.out.print(i+ " ");
    }
}

//Best case Time complexity :-  O(n)
//Avg case Time complexity :-  O(n^2)
//Worst case Time complexity :-  O(n^2)

//Space complexity :-  O(1)
