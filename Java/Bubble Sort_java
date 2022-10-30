//Sorting elements of Array in ascending order using Bubble sort in java
//Number of rounds = n-1  , where n is number of elements in array

public class BubbleSort {

	void bubbleSort(int[] array) {
		
		   for(int i=0; i<array.length; i++) {
			     int flag =0;            // for the case when array is sorted before completion of all the rounds
			for(int j=0; j<array.length-1-i; j++) {
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
	public static void main(String[] args) {
		BubbleSort bs = new BubbleSort();
		int arr[]= {32,19,26,12,5,-1};
		 System.out.println("Array Before Sorting...");
			for(int i:arr)
				System.out.print(i+ " ");
			System.out.println();
			
			 System.out.println(" Array After Sorting...");
	                bs.bubbleSort(arr);
	                      for(int i:arr)
		                     System.out.print(i+ " ");

	}

}

//Best case Time complexity :-  O(n)
//Avg case Time complexity :-  O(n²)
//Worst case Time complexity :-  O(n²)

//Space complexity :-  O(1)
