package zadatak21;

import java.util.ArrayList;

public class Ucionica {
	private ArrayList<Student> studenti = new ArrayList<Student>();
	private int kapacitet = 5;

	
	public void dodajStudenta(Student s) {
		if(studenti.size() < kapacitet) {
			studenti.add(s);		
		}
	}
	
	public void ukloniStudenta(int pozicija) {
			studenti.remove(pozicija);
		
	}
	

	public void isprazniUcionicu() {
		studenti.clear();
	}

	@Override
	public String toString() {
		if(studenti.isEmpty()) return "Ucionica je prazna." ;
		return "Ucionica [studenti=" + studenti + ", kapacitet=" + kapacitet + "]";
	}
	
	
}
