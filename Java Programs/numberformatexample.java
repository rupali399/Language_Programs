class numberformatexample
{
	void func1()
	{	
		String str = "123ab";

		int var = Integer.parseInt(str);
		System.out.println(var + 5);
	}

	public static void main(String args[])
	{	
		numberformatexample obj = new numberformatexample();
		obj.func1();
	}
}