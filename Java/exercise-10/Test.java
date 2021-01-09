package zadkolokvijum;

public class Test {

	public static void main(String[] args) {
		
		Ugovor u1 = new Ugovor();
		Ugovor u2 = new Ugovor("poverljiv", 5, 2010, "treasure");
		
		u1.ispis();	
		u2.ispis();
		System.out.println();
		
		Ugovor u[] = new Ugovor[4];
		 u[0] = new Ugovor("poverljiv", 3, 2015, "airlines");
		 u[1]= new Ugovor("zvanican", 4, 2019, "tourist" );
		 u[2]= new Ugovor("zvanican", 6, 2016, "network");
		 u[3]= new Ugovor(u2);
		 
		 System.out.println("Niz ugovora: ");
		 u[0].ispis();
		 u[1].ispis();
		 u[2].ispis();
		 u[3].ispis();
		 System.out.println();
		 
		 Ugovor najmladjiU = najmladjiUgovor(u);
		 if(najmladjiU!=null) {
			 System.out.println("Najmladji ugovor u nizu ugovora napisan je godine " + najmladjiU.godina);
		 }


	}
	public static Ugovor najmladjiUgovor(Ugovor[] u) {
		
		if(u==null) {
			return null;
		}
		
		Ugovor najmladji= u[0];
			for(int i=1; i < u.length; i++) {
				if(u[i].godina < najmladji.godina)
					 najmladji=u[i];
			}
		return najmladji;
	}
	

}
