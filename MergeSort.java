public class MergeTwoSortedArrays {
	public static void printArray(int[]arr) {
		for(int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
	}
	public static int[] merge2SortedArrays(int arr1[],int arr2[]) {
		int m = arr1.length;
		int n = arr2.length;
		int arr[] = new int[m+n];
		int i = 0;
		int j = 0;
		int k = 0;
		while(i < m && j < n) { // this while loop is for comparing element between two array
			if(arr1[i] <= arr2[j]) {
				arr[k] = arr1[i]; // array1 element
				i++;
				k++;
			}
			else {
				arr[k] = arr2[j]; // array2 element
				j++;
				k++;
			}
		}
		while(i < m) { // this while loop is for copying remaining data from the array1(if any left)
			arr[k] = arr1[i];
			i++;
			k++;
		}
	
		
		while(j < n) { //this while loop is for copying remaining data from the array2(if any left)
			arr[k] = arr2[j];
			j++;
			k++;
		}
	
		return arr;
	}

	public static void main(String[] args) {
		int arr1[] = {1,4,6,10,13};
		int arr2[] = {2,5,7,9};
		int arr3[] = merge2SortedArrays(arr1,arr2);
		printArray(arr3);

	}

}
