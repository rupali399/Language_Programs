interface newclass
{
	static void func1()
	{
		System.out.println("Static method");
	}

	public void func2();
}

class staticmethodininterface implements newclass
{
	public void func2()
	{	
		System.out.println("public method");		
	}

	public static void main(String args[])
	{
		staticmethodininterface obj = new staticmethodininterface();
		newclass.func1();
		obj.func2();	
	}
}