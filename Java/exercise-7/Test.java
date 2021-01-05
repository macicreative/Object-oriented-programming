package zadatak21;

public class Test {

	public static void main(String[] args) {

		Student s1= new Student("AI 1/21", "Amelie", "Poulain");
		Student s2= new Student("RA 2/21", "Will", "Hunting");
		Student s3= new Student("EE 3/21", "Nil", "Armstrong");
		
		System.out.println("**********Testiranje klase Student**********");
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
	

	System.out.println("*******Testiranje klase Ucionica************" );
		Ucionica u1= new Ucionica();
	
		System.out.println(u1);
		
		u1.dodajStudenta(s1);
		u1.dodajStudenta(s2);
		u1.dodajStudenta(s3);
		
		System.out.println();
		System.out.println(u1);
		
		u1.ukloniStudenta(2);
		
		System.out.println(u1);
		
		System.out.println("\n********Testiranje klase UcionicaMap**********");
		UcionicaMap um= new UcionicaMap();
		um.dodajStudenta(s1);
		um.dodajStudenta(s2);
		um.dodajStudenta(s3);
		
		System.out.println(um);
		
		um.ukloniStudenta("EE 3/21");
		System.out.println();
		System.out.println(um);
		
		um.isprazniUcionicu();
		System.out.println();
		System.out.println(um);
		
	}
}



