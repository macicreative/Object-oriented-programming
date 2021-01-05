package zadatak21;

import java.util.HashMap;

public class UcionicaMap {
	private HashMap<String, Student> studenti= new HashMap<String, Student>();
	private int kapacitet = 5;

	public void dodajStudenta(Student s) {
		if(studenti.size() < kapacitet)
			studenti.put(s.getIndeks(), s);
	}

	public void ukloniStudenta(String indeks) {
			studenti.remove(indeks);
	}
	
	public void isprazniUcionicu() {
		studenti.clear();
	}

	@Override
	public String toString() {
		if(studenti.isEmpty()) return "Ucionica je prazna.";
		
		return "UcionicaMap [studenti=" + studenti + ", kapacitet=" + kapacitet + "]";
	}
	
}
