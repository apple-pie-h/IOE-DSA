public class pop {
    static int[] stack = { 10, 20, 30 };
    static int top = 2;

    static void popStack() {
        if (top == -1) {
            System.out.println("Stack Underflow");
            return;
        }

        System.out.println(stack[top] + " popped from stack");
        top--;
    }

    public static void main(String[] args) {
        popStack();
        popStack();
    }

}
