public class InsertionSort {
	public static void printArray(int arr[]) {
		int n = arr.length;
		for(int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
	}
	public static void insertionSort(int arr[]) {
		int n = arr.length;
		for(int i = 1; i < n; i++) {
			int j = i - 1;
			int temp = arr[i];
			while(j >=0 && arr[j] > temp) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j+1] = temp;
		}
	}

	public static void main(String[] args) {
		int arr[] = {9,7,6,8,4,5,2,3};
		insertionSort(arr);
		printArray(arr);
	}

}
