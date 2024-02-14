class nullpointerexception
{
	void func()
	{
		String str = "123";
		int var = Integer.parseInt(str);
		System.out.println(var);
  	}
	public static void main(String args[])
	{	
		nullpointerexception obj;
		//obj = new nullpointerexception();
		obj.func();
	}
}