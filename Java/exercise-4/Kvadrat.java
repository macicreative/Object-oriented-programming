package zadatak4;

public class Kvadrat extends Pravougaonik{

	public Kvadrat(double a) {
		super(a, a); // super oznacava roditeljsku klasu
	}

	@Override
	public double getA() {
		return super.getA();
	}
	@Override
	public void setA(double a) {
		super.setA(a);
		super.setB(a);
	}
	
	@Override
	public double getB() {
		return super.getB();
	}
	
	@Override
	public void setB(double b) {
		super.setA(b);
		super.setB(b);
	}

	@Override
	public String toString() {
		return "Kvadrat [a= "+ super.getA() + "]";
	}
	
	

}
