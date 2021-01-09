package primer2;

public class Autobus {
	private String regbr;
	private int godiste;

	public Autobus(String regbr, int godiste) {
		super();
		this.regbr = regbr;
		this.godiste = godiste;
	}
	
	
	public String getRegbr() {
		return regbr;
	}

	public int getGodiste() {
		return godiste;
	}



	public boolean voznoStanje() {
		if(godiste> 2000) {
			return true;
			}
		return false;
	}
	
	
	
	@Override
	public String toString() {
		return "Autobus sa registracijom " + regbr + ", godista " + godiste + "\n";
	}

	
}
