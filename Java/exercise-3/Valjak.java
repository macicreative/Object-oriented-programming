package zadatak3;

import zadatak1.Pravougaonik;
import zadatak1.Krug;

public class Valjak {
	private Pravougaonik m;
	private Krug b;
	
	public Valjak(double r, double h) {
		this.b = new Krug(r);
		this.m = new Pravougaonik(b.getO(),h);
	}
	
	public Valjak(Valjak v) {
		this.b= v.b;
		this.m= v.m;
	}
	
	public double getR() {
		return b.getR();
	}
	
	public double getH() {
		return m.getB();
	}
	
	public double getP() {
		return 2*b.getP() + m.getP();
	}
	
	public double getV() {
		return b.getP() * m.getB();
	}

}
