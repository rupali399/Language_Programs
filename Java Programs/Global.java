class Global
{
	// abstraction_ encapsulation:-

	/*void btech()
	{
		System.out.println("BTECH PROGRAM");
	}

	void bca()
	{
		System.out.println("BCA PROGRAM");
	}

	void bba()
	{
		System.out.println("BBA PROGRAM");
	}

	void mba()
	{
		System.out.println("MBA PROGRAM");
	}*/

	// polymorphism :-

	/*void btech()
	{
		System.out.println("BTECH FROM CS");
	}

	void btech(int account)
	{
		System.out.println("BTECH FROM EC");
	}*/

	// Function Overloading :-

	void btech()
	{
		System.out.println("BTECH FROM EC");
	}

	void btech(int account)
	{
		System.out.println("BTECH FROM CS");
	}

	void btech(int x, int y)
	{
		System.out.println("BTECH FROM CIVIL : " +x +" " +y);
	}

	void btech(int x, String y)
	{
		System.out.println("BTECH FROM MACH");
	}

	void btech(String x, int y)
	{
		System.out.println("BTECH FROM CIVIL");
	}

	public static void main(String args[])
	{
		Global counceller = new Global();
		//counceller.btech();
		//counceller.btech(500);

		counceller.btech(10, 20);
		counceller.btech();
		counceller.btech(500);
		counceller.btech(500, "global");
		counceller.btech("global", 500);
	}
}