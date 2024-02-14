interface myclass
{
	static int var1 = 10;
	final int var2 = 20;

	public void func();
		
}

class myclass2 implements myclass
{	
	public void func()
	{
		System.out.println("var1");
		System.out.println("var2");
	}
	

	public static void main(String args[])
	{
		myclass2 obj = new myclass2();
		obj.func();
	}
}

