class insertion{
    static void insertion(int arr[], int n, int element, int index){
        if (index < 0 || index > n) {
            System.out.println("Invalid index");
            return;
        }
        for (int i = n - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }  

    static void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5}; 
        int n = 5; 
        int element = 10; 
        int index = 2; 
        System.out.println("Original array:");
        printArray(arr, n);
        insertion(arr, n, element, index);
        n++; 
        System.out.println("Array after insertion:");
        printArray(arr, n);
    }
}
