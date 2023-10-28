public class BubbleSort {
	public static void printArray(int arr[]) {
		int n = arr.length;
		for(int i = 0; i < n; i++) {
			System.out.println(arr[i]);
		}
	}

	public static void bubbleSort(int[] arr) {
		int n = arr.length;
		for(int i = 0; i < n-1; i++) { // this loop for (n-1)round
			for(int j = 0; j < n-1-i; j++) { // this loop is for (n-1) largest number[till n-2 index]
				if(arr[j] > arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
			
		}
	}

	public static void main(String[] args) {
		int[] arr = {3,4,6,1,5,7,8};
		bubbleSort(arr);
		printArray(arr);

	}

}
