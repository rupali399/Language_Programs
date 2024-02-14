// abstract_class  // abstract method

/*abstract class RGPVUniversity
{
	void btech()
	{
		System.out.println("btech form RGPV");
	}

	abstract void manager();   //declaration
	abstract void manager2(); //declaration
}

class abstractclasscollege extends RGPVUniversity
{
	void manager() //definition // override
	{
		System.out.println("RGPV manager");
	}

	void manager2() //definition // override
	{
		System.out.println("RGPV manager2");
	}

	void diploma()
	{
		System.out.println("diploma form college");
	}

	public static void main(String  args[])
	{
		abstractclasscollege obj = new abstractclasscollege();
		obj.diploma();
		obj.btech(); //calling
		obj.manager();
		obj.manager2();
	}
	
}*/




//  interface


interface RGPVUniversity
{
	abstract void btech();
}

interface AKTU
{
	public void mtech();
}

class abstractclasscollege implements RGPVUniversity, AKTU
{
	public void btech()
	{
		System.out.println("btech program");
	}

	public void mtech()
	{
		System.out.println("mtech program");
	}

	public static void main(String  args[])
	{
		abstractclasscollege obj = new abstractclasscollege();
		obj.btech();
		obj.mtech();
	}
	
}