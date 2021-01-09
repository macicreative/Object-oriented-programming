package primer2;

import java.util.HashMap;

public class Parking {
	private String naziv;
	private HashMap<String, Autobus> parkirani;
	
	public Parking(String n) {
		naziv = n;
		parkirani = new HashMap<String, Autobus>();
	}
	
	public boolean uparkiraj(Autobus a) {
		String rgbus= a.getRegbr();
		if(a.voznoStanje()) {
			if(!parkirani.containsKey(rgbus)) {
			 parkirani.put(rgbus, a);
			 return true;
			}
		}
		
		return false;
			
	}
	public Autobus isparkiraj(String regbr) {
		return parkirani.remove(regbr);
		
	}

	@Override
	public String toString() {
	String rez = "Naziv parkinga " + naziv;
	
	if(parkirani.isEmpty()) {
		return rez+= "- parking je prazan.";
	}
	
	for (Autobus a : parkirani.values()) {
		rez+= "\n" + a.toString();
		rez+="";
		
	}
	
	return rez;
	

	}
	
	
	
	
	 
	
	

}
