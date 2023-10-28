import java.util.Scanner;
public class SelectionSort {
	public static void printArray(int[] arr) {
		int n = arr.length;
		for(int i = 0; i<n; i++) {
			System.out.println(arr[i]);
		}
	}
	public static void selectionSort(int arr[]) {
		int n = arr.length;
		//here two loops are required 1st one is for inserting element at ith position(till n-2)
		//2nd one is for finding minimum element among n numbers (from 0 to n-1)
		for(int i = 0; i < n-1; i++) {
			int min = Integer.MAX_VALUE;
			int minIndex = -1;
			for(int j = i; j < n; j++) {
				if(arr[j] < min) {
					min = arr[j];
					minIndex = j;
				}
			}
			//swapping between element of minIndex and ith element
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
	public static int[] takingInput() {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int[] arr = new int[n];
		for(int i = 0; i < n; i++) {
			System.out.println("Enter the number at" + " " + i + "th index");
			arr[i] = s.nextInt();
		}
		return arr;
	}
	

	public static void main(String[] args) {
		int arr[] = takingInput();
		selectionSort(arr);
		printArray(arr);
	}

}
