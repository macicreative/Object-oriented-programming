package zadatak5;

public class Pravougaonik implements GeometrijskaFigura{
	private double a;
	private double b;
	
	
	public Pravougaonik(double a, double b) {
		super();
		this.a = a;
		this.b = b;
	}

	public double getA() {
		return a;
	}

	public void setA(double a) {
		this.a = a;
	}

	public double getB() {
		return b;
	}

	public void setB(double b) {
		this.b = b;
	}

	@Override
	public double getP() {
		return a * b;
	}

	@Override
	public double getO() {
		return 2 * (a+b);
	}

	@Override
	public String toString() {
		return "Pravougaonik [a=" + a + ", b=" + b + "]";
	}
	

}
