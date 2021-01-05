package zadatak3;

public class Test {

	public static void main(String[] args) {
		
	Valjak v= new Valjak(2,5);
	System.out.println("Poluprecnik baze valjka je: " + v.getR() + " , a visina valjak je: " + v.getH());
	System.out.println("Povrsina valjka: "+ v.getP()+ "\nZapremina valjka " + v.getV());

	Valjak v1 = new Valjak(v);
	System.out.println("\nPovrsina valjka je: " + v1.getP());
	System.out.println("Zapremina valjka je: " + v1.getV());
	}

}
