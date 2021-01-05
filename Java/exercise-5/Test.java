package zadatak5;

public class Test {

	public static void main(String[] args) {
		Pravougaonik p1 = new Pravougaonik(5,6);
		Krug k1= new Krug(3);
		Pravougaonik kv= new Kvadrat(4);
		
		System.out.println(p1);
		System.out.println(k1);
		System.out.println(kv);
		
		System.out.println();
		ispisiFiguru(p1);

	}


	public static void ispisiFiguru(GeometrijskaFigura g) {
		System.out.println(g);
		System.out.println(g.getO());
		System.out.println(g.getP());
	}
	
}
