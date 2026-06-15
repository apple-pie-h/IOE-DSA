class deletion{
    static int deletion(int arr[], int n, int index){
        if (index < 0 || index >= n) {
            System.out.println("Invalid index");
            return n;
        }
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        return n;
    }

   static void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr={1, 2, 3, 4, 5};
        int n = 5;
        int index = 2; 
        System.out.println("Original array:");
        printArray(arr, n);
        n= deletion(arr, n, index);
        System.out.println("Array after deletion:");
        printArray(arr, n);
    }
}
