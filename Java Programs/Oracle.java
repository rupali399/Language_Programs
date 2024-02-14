// single inheritance

/*class SunMicroSystem
{
	void java()
	{
		System.out.println("java program.....");
	}
}

class Oracle extends SunMicroSystem
{

	void dbms()
	{
		System.out.println("sql.....");
	}

	public static void main(String args[])
	{
		Oracle obj = new Oracle();
		obj.dbms();
		obj.java();
	}
}*/

// Multilevel Inheritance

/*class SunMicroSystem
{
	void java()
	{
		System.out.println("java program.....");
	}
}

class Google extends SunMicroSystem
{
	void android()
	{
		System.out.println("Android app development");
	}
}

class Oracle extends Google
{

	void dbms()
	{
		System.out.println("sql.....");
	}

	public static void main(String args[])
	{
		Oracle obj = new Oracle();
		obj.android();
		obj.dbms();
		obj.java();
	}
}*/

// Function Overriding

class SunMicroSystem
{
	void java()
	{
		System.out.println("java program.....");
	}

	// overridden
	final void clang()
	{
		System.out.println("C lang by SunMicroSystem");
	}
}

class Oracle extends SunMicroSystem
{
	// override
	void clang()
	{
		System.out.println("C lang by oracle");
	}

	void dbms()
	{
		System.out.println("sql....");
	}

	public static void main(String args[])
	{
		Oracle obj = new Oracle();
		obj.clang();
	}
}