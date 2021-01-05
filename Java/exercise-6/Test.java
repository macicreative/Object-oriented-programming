package zadatak2;

public class Test {

	public static void main(String[] args) {
		Test t = new Test();
		
		t.testirajCDDisk();
		t.testirajXCDStorage();
		t.testirajXCDStorageMap();
		t.testirajIzmenu();
		
	}

	private void testirajCDDisk() {
		
		System.out.println("\n*********Testiranje klase CDDisk************");
		CDDisk d1= new CDDisk(1985,"Promise", "Sade");
		CDDisk d2= new CDDisk(2018, "Lost&Found", "Jorja Smith");
		
		System.out.println(d1);
		System.out.println(d2);
	}
	
	private void testirajXCDStorage() {
		System.out.println("\n*********Testiranja klase XCDStorage***********");
		XCDStorage cds= new XCDStorage();
		System.out.println(cds);
		
		CDDisk d1= new CDDisk(1,"Promise", "Sade");
		CDDisk d2= new CDDisk(2, "Lost&Found", "Jorja Smith");
	
		cds.add(d1);
		cds.add(d2);
		System.out.println(cds);
		
		CDDisk pronadjen = cds.find(1);
		if(pronadjen!=null)
			System.out.println("Pronadjen disk: " + pronadjen);
		
		CDDisk uklonjen= cds.remove(2);
		if(uklonjen!=null) 
			System.out.println("Uklonjen disk: " + uklonjen);
	}
	
	private void testirajXCDStorageMap() {
		System.out.println("\n*********Testiranja klase XCDStorageMap***********");
		XCDStorageMap cds= new XCDStorageMap();
		System.out.println(cds);
		
		CDDisk d1= new CDDisk(1,"Promise", "Sade");
		CDDisk d2= new CDDisk(2, "Lost&Found", "Jorja Smith");
		
		cds.add(d1);
		cds.add(d2);
		System.out.println(cds);
		
		CDDisk pronadjen = cds.find(1);
		if(pronadjen!=null)
			System.out.println("Pronadjen disk: " + pronadjen);
		
		CDDisk uklonjen= cds.remove(2);
		if(uklonjen!=null) 
			System.out.println("Uklonjen disk: " + uklonjen);
	}
	
	private void testirajIzmenu() {
		
		System.out.println("\n********Testiranje izmene nakon dodavanja*******");
		CDDisk d1= new CDDisk(1,"Promise", "Sade");
		CDDisk d2= new CDDisk(2, "Lost&Found", "Jorja Smith");
		XCDStorageMap cdsm= new XCDStorageMap();
		XCDStorage cds= new XCDStorage();
		cdsm.add(d1);
		cdsm.add(d2);
		cds.add(d1);
		cds.add(d2);
		
		System.out.println(cds);
		System.out.println(cdsm);
		
		d2.setId(1);
		
		System.out.println(cds);
		System.out.println(cdsm);
		
		// id vrednosti nece vise biti jedinstvene
		// Pogotovo kod struktura koje koriste hash funkcije za identifikaciju treba voditi racuna da li to zelimo
		// izbegavati; nije ta namena
	}
	

}
