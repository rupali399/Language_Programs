abstract class myclass
{
	static int var1 = 10;
	//final int var2 = 20;

	void func()
	{
		System.out.println(var1);
	}	
}

class myclass1 extends myclass
{
	public static void main(String args[])
	{
		myclass1 obj = new myclass1();
		obj.func();
	}
}

