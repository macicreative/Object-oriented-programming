package zadkolokvijum;


public class Ugovor extends Dokument {

	private String opisUgovora;
	
	public Ugovor() {
		tip = "nepoznat";
		redniBroj = 0;
		godina = 0;
		opisUgovora= "radno";
		//opisUgovora= new String("radno");
	}


	public Ugovor(String tip, int redniBroj, int godina, String opisUgovora) {
		super.tip= tip;
		super.redniBroj = redniBroj;
		super.godina = godina;
		this.opisUgovora = opisUgovora;
	}


	public Ugovor(Ugovor u) {
		super.tip = u.tip;
		super.godina = u.godina;
		super.redniBroj = u.redniBroj;
		this.opisUgovora = u.opisUgovora;
	}
	
	public String getOpisUgovora() {
		return opisUgovora;
	}

	public void setOpisUgovora(String opisUgovora) {
		this.opisUgovora = opisUgovora;
	}

	
	
	@Override
	public void ispis() {
		System.out.println("\nPodaci o ugovoru: \n");
		System.out.println("Tip ugovora: " + super.getTip());
		System.out.println("Redni broj ugovora: " + super.getRedniBroj());
		System.out.println("Godina kada je napisan: " + super.getGodina());
		if(super.getTip().equals("poverljiv")) {
			System.out.println("Ugovor je poslovan. \n");
		} else {
		System.out.println("Opis ugovora: " + getOpisUgovora());
		}
	}
}
