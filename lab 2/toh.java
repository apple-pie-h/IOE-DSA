import java.util.*;

class toh {
    static void tower(int n, char A, char B, char C) {
        if (n == 1) {
            System.out.println("Move from disk " + A + " to " + C);
            return;
        }
        tower(n - 1, A, C, B);
        System.out.println("Move from disk " + A + " to " + C);
        tower(n - 1, B, A, C);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of disk: ");
        int n = sc.nextInt();
        tower(n, 'A', 'B', 'C');
        sc.close();
    }
}
