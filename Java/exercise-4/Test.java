package zadatak4;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Pravougaonik p= new Pravougaonik(2, 5);
		Krug k = new Krug(4);
		Kvadrat kv= new Kvadrat(6);
		
		ispisiFiguru(p);
		ispisiFiguru(k);
		ispisiFiguru(kv);
	
	}

	public static void ispisiFiguru(GeometrijskaFigura g) {
		System.out.println(g);
		System.out.println(g.getO());
		System.out.println(g.getP());
	}
	
	
}
