/*class constructor
{
	constructor()
	{
		System.out.println("Welcme in Global College");
	}

	public static void main(String args[])
	{
		constructor obj = new constructor();
		
	}
}*/

/*class constructor
{

	void btech()
	{
		System.out.println("btech program");
	}

	void bba()
	{
		System.out.println("bba program");
	}

	void bca()
	{
		System.out.println("bca program");
	}

	constructor()
	{
		System.out.println("Welcme in Global College");
	}
	
	public static void main(String args[])
	{
		constructor obj = new constructor();
		obj.btech();
		obj.bca();
		obj.bba();
		
	}
}*/

// constructor overloading_types of constructor

class constructor
{
	constructor()
	{
		System.out.println("Non parameterised constructor");
	}

	constructor(int a)
	{
		System.out.println("Parameterised constructor");
	}

	public static void main(String args[])
	{
		constructor obj1 = new constructor(15);
		constructor obj2 = new constructor();
	}
}