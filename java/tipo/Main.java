interface A{
    public void print();
}
class B implements A{
    public void print(){
        System.out.println("class B");
    }
}
class C implements A{
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
