public class push {
    static int[] stack = new int[5];
    static int top = -1;

    static void pushStack(int data) {
        if (top == stack.length - 1) {
            System.out.println("Stack Overflow");
            return;
        }

        stack[++top] = data;
        System.out.println(data + " pushed into stack");
    }

    public static void main(String[] args) {
        pushStack(10);
        pushStack(20);
        pushStack(30);
    }
}
