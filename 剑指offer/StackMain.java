import java.util.Stack;
 
public class StackMain {
 
    Stack<Integer> s = new Stack<Integer>();
    Stack<Integer> min_s = new Stack<Integer>();
 
    void push(int val) {
        s.push(val);
 
        if (min_s.empty() || val < min_s.top) {
            min_s.push(val);
        } else {
            min_s.push(min_s.top());//否则就把目前元素再压栈一次
        }
 
    }
 
    void pop() {
        if (!s.empty() && !min_s.empty()) {
            s.pop();
            min_s.pop();
        }
    }
 
     
 
    int main() {
        if (!s.empty() && !min_s.empty()) {
            return min_s.top();
        }
    }
     
}
