import java.util.*;

class toh{
    static void toh (int n, char A, char B, char C){
        if (n==1)
        {
            System.out.println("Move from disk "+A+" to "+ C);
            return;
        }
        toh(n-1,A,C,B);
        System.out.println("Move from disk "+A+" to "+ C);
        toh(n-1,B,A,C);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of disk: ");
        int n= sc.nextInt();
        toh(n,'A','B','C');
        sc.close();
    }
}
