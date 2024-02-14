class Amity
{
	Amity()
	{
		System.out.println("Non parameterised constructor---base");
	}

	Amity(int a)
	{
		System.out.println("parameterised constructor---base");
	}
}

class ConstructorInheritance extends Amity
{
	ConstructorInheritance()
	{
		System.out.println("Non parameterised constructor---derived");
	}

	ConstructorInheritance(int a)
	{
		//super(a);
		System.out.println("parameterised constructor---derived");
		super(a);
	}

	public static void main(String args[])
	{
		ConstructorInheritance obj = new ConstructorInheritance(26);
	
	}
}