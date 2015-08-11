public class T{
    public void fun(){
    System.out.println("this is T");
    }
}


class Test{
    public static void main(String[] args){
        T t = new T();
        t.fun();
    }
}