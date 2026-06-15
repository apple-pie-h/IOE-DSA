import java.util.*;

class fib{
    static int fib(int n){
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
    static void printfib(int n){
        if (n < 0) {
            System.out.println("Please enter a positive integer.");
            return;
        }
        for(int i=0;i<n;i++){
            System.out.print(fib(i)+" ");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms:");
        int n = sc.nextInt();
        printfib(n);
        sc.close();
    }
}
