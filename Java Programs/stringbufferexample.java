class stringbufferexample
{
	public static void main(String args[])
	{
		StringBuffer sb1 = new StringBuffer("Global");
		StringBuffer sb2 = new StringBuffer("College");

		System.out.println(sb1);
		System.out.println(sb2);

		System.out.println("\n--------------------\n");
		
		// ---------------merge two strings

		//sb1.append(sb2);
		//System.out.println(sb1);

		// reverse a string
		sb1.reverse();
		System.out.println(sb1);
	}
}