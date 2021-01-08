package zadatak2;

public class CDDisk {
	
	private int id;
	private String naziv;
	private String izvodjac;
	
	public CDDisk() {
		naziv = "nepoznat";
		izvodjac = new String("nepoznat");
		id = -1;
	}
	
	public CDDisk(int id, String naziv, String izvodjac) {
		super();
		this.id = id;
		this.naziv = naziv;
		this.izvodjac = izvodjac;
	}

	public int getId() {
		return id;
	}
	
	public void setId(int id) {
		this.id = id;
	}
	
	public String getNaziv() {
		return naziv;
	}
	
	public void setNaziv(String naziv) {
		this.naziv = naziv;
	}
	
	public String getIzvodjac() {
		return izvodjac;
	}
	
	public void setIzvodjac(String izvodjac) {
		this.izvodjac = izvodjac;
	}

	@Override
	public String toString() {
		return "CDDisk [id=" + id + ", naziv=" + naziv + ", izvodjac=" + izvodjac + "]";
	}
	
}
