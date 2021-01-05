package zadatak2;

import zadatak1.Pravougaonik;

public class TestNiz {
	
	public static void main(String args[]) {
		
		System.out.println("Niz celih brojeva");
		int a[] = {2,4,5,6,7,8};
		
		for(int i=0; i < a.length; i++) {
			System.out.println("Element na poziciji "+ i + " je " + a[i]);
		}
		
		double b[] = new double[5];
		b[0]=2.23; 
		b[4]=4.34;
		
		System.out.println("\nNiz realnih brojeva");
		
		for(int i=0; i < b.length; i++) {
			System.out.println("Element na poziciji "+ i +" je " + b[i]);
		}
		
		
		System.out.println("\nNiz pravougaonika");
		Pravougaonik p[]= new Pravougaonik[5];
		p[0] = new Pravougaonik(4,5);
		p[1] = new Pravougaonik(5, 8);
	    p[2] = new Pravougaonik(3, 9);
	    p[3] = new Pravougaonik(7, 1);
	    p[4] = new Pravougaonik(6, 11);
	    
	    for(int i=0; i < p.length; i++) {
	    	System.out.println("Pravougaonik na poziciji: " + i + " ima povrsinu " + p[i].getP());
	    }
	    
	    
	
	Pravougaonik pMax=NajvecaPovrsina(p);
	if(pMax!=null) {
			
		System.out.println("Pravougaonik sa najvecom povrsinom je pravougaonik sa stranicama " + pMax.getA() + " i " + pMax.getB());
	        
	}
}
	
	public static Pravougaonik NajvecaPovrsina(Pravougaonik[] p) {
		
		if(p==null) {
			return null;
		}
		
		Pravougaonik pMax= p[0];
			for(int i=1; i < p.length; i++) {
				if(p[i].getP() > pMax.getP()) 
					pMax= p[i];
			}
		return pMax;
	}
	
	
}
