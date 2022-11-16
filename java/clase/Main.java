class A{
    public void print(){
        System.out.println("class A");
    }
}
class B extends A{
    public void print(){
        System.out.println("class B");
    }
}
class C extends A{
    public void print(){
        System.out.println("class C");
    }
}

public class Main{
	public static void main(String[] args) {
		A b = new B();
		A c = new C();
		b.print(); //class B
		c.print(); //class c
	}
}
