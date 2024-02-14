abstract class myclass
{
	static int var1 = 10;
	final int var2 = 20;

	void func()
	{
		System.out.println(var1);
		System.out.println(var2);
	}	
}

abstract class myclass1 extends myclass
{
	void func1()
	{
		System.out.println("2nd abstract class");
	}	
}

class myclass2 extends myclass1
{	
	public static void main()
	{
		myclass2 obj = new myclass2();
		obj.func();
		obj.func1();
	}
}

