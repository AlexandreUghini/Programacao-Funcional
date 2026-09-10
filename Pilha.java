import java.util.Arrays;

class Pilha {
    private int[] data;
    private int top;
    public Pilha() {
        data = new int[10];
        top = 0;
    }
    public boolean isEmpty(){
        return top <= 0;
    }
    public boolean isFull(){
        return top >= 10;
    }
    public void push(int e){
            data[top++] = e;
    }
    public int pop(){
            return data[--top];
        }
    public String toString(){
        return String.format("{%d %s}",top, Arrays.toString(data));
    }

    public static void main(String[] args) {
      Pilha p1;
      p1 = new Pilha();

      System.out.println(p1);
      System.out.println(p1.isEmpty());
      System.out.println(p1.isFull());

      p1.push(42);

      System.out.println(p1);
      System.out.println(p1.isEmpty());
      System.out.println(p1.isFull());


    }
    //expected
    //{0 [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]}
    //true
    //false
    //{1 [42, 0, 0, 0, 0, 0, 0, 0, 0, 0]}
    //false
    //false
}