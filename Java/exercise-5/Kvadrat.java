package zadatak5;

public class Kvadrat extends Pravougaonik {

	public Kvadrat(double a) {
		super(a, a);
		
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
		super.setB(b);
		super.setA(b);
	}

	
	@Override
	public String toString() {
		return "Kvadrat [a=" + super.getA() + "]";
	}
	
	
}
	

