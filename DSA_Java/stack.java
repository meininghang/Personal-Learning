import java.util.Stack;
public class stack {
    public static void main(String[] args) {
        Stack<String> stack = new Stack<String>();
//        System.out.println(stack.empty());

        stack.push("Minecraft");
        stack.push("Skyrim");
        stack.push("DOOM");
        stack.push("Bordelands");
        stack.push("FFVII");

        String myFavGame = stack.pop();
        System.out.println(stack.peek());
        System.out.println(myFavGame);
        System.out.println(stack.search("Fallou76"));
        System.out.println(stack.search("DOOM"));

        System.out.println(stack);
    }
}
