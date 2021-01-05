package zadatak1;


public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	Pravougaonik p1= new Pravougaonik(4,5);
	System.out.println("Vrednost stranice a: " + p1.getA());
	System.out.println("Vrednost stranice b: " + p1.getB());
	
	System.out.println("Obim: "+ p1.getO()+ "\nPovrsina: "+ p1.getP());
	
	
	Pravougaonik p2= new Pravougaonik(p1);
	p2.setA(6);
	System.out.println("\r\nVrednost stranice a: " + p2.getA() + "\nVrednost stranice b: " + p2.getB());
	System.out.println("Obim: "+ p2.getO() + "\nPovrsina: "+ p2.getP());
	
	Krug k1= new Krug(3);
	Krug k2= new Krug(k1);
	
	System.out.println("Poluprecnik kruga k1: "+k1.getR()+ ",a kruga k2 je: "+ k2.getR());
	System.out.println("Obim: "+ k1.getO() + "\nPovrsina: "+ k1.getP());
	System.out.println("Obim: "+ k2.getO() + "\nPovrsina: "+ k2.getP());
	
	}
}	
