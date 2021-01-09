package primer2;

/**
 * @author Sara
 */
public class Test {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
	
		Test t= new Test();
		
		t.testirajAutobus();
		

	}

	private void testirajAutobus() {
		Autobus lasta= new Autobus("NS-111-AB", 2003);
		Autobus nisExpres= new Autobus("NI-333-AS", 2010);
		Autobus dunavac= new Autobus("NS-222-DS", 1979);
		Autobus jgsp= new Autobus("BG-245-FG", 2018);
		
		
		Parking p1= new Parking("Sanjalica");
		p1.uparkiraj(lasta);
		p1.uparkiraj(dunavac);
		p1.uparkiraj(nisExpres);
		p1.uparkiraj(jgsp);
		
		System.out.println("Prikaz trenutnog stanja na parkingu");
		System.out.println(p1.toString());
		
	}

}
